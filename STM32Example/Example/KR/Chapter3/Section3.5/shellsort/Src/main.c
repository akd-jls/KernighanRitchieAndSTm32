

#include <stdio.h>

/* shellsort: sort v[0]...v[n-1] into increasing order */
void shellsort(int v[], int n)
{
  int gap, i, j, temp;
  for (gap = n/2; gap > 0; gap /= 2)
    for (i = gap; i < n; i++)
      for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
        temp = v[j];
        v[j] = v[j+gap];
        v[j+gap] = temp;
      }
}

int databuffer[] = {1,6,7,2,9,3,2,11,68,39,0};

int main ()
{
	int i =0;
	
	printf("unshorted data: ");
	for(i=0; i< sizeof(databuffer)/sizeof(databuffer[0]);i++)
		printf("%d, ", databuffer[i]);
	printf("\n");	

	shellsort(databuffer, sizeof(databuffer)/sizeof(databuffer[0]));

	printf("  shorted data: ");
	for(i=0; i< sizeof(databuffer)/sizeof(databuffer[0]);i++)
		printf("%d, ", databuffer[i]);
	printf("\n");
}
