

#include <stdio.h>

void swap(int v[], int i, int j);


/* qsort: sort v[left]...v[right] into increasing order */
void qsort(int v[], int left, int right)
{
  int i = 0, last = 0;
  if (left >= right) /* do nothing if array contains */
    return; /* fewer than two elements */
		
  swap(v, left, (left + right)/2); /* move partition elem */
	
  last = left; /* to v[0] */
	
  for (i = left + 1; i <= right; i++) /* partition */
    if (v[i] < v[left]) 
      swap(v, ++last, i);
	swap(v, left, last); /* restore partition elem */ 	/* last is split point*/
  qsort(v, left, last-1);                             /* last -1 */
  qsort(v, last+1, right);														/* last +1 */
}




/* swap: interchange v[i] and v[j] */

void swap(int v[], int i, int j)
{

  int temp = 0;
  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

//int databuffer[] = {1,6,7,2,9,3,2,11,68,39,0};
//int databuffer[] = {11,10,9,8,7,60,5,4,3,2,1,0};
int databuffer[] = {54,26,93,17,77,31,44,55,20};

int main ()
{
	int i =0;
	
	printf("unshorted data: ");
	for(i=0; i< sizeof(databuffer)/sizeof(databuffer[0]);i++)
		printf("%d, ", databuffer[i]);
	printf("\n");	

	qsort(databuffer,0, (sizeof(databuffer)/sizeof(databuffer[0])-1));

	printf("  shorted data: ");
	for(i=0; i< sizeof(databuffer)/sizeof(databuffer[0]);i++)
		printf("%d, ", databuffer[i]);
	printf("\n");
}
