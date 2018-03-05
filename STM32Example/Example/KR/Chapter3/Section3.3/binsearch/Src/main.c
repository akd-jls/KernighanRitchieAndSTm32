
#include <stdio.h>

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n)
{
  int low, high, mid;
  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low+high)/2;
    if (x < v[mid])
      high = mid + 1;
    else if (x > v[mid])
      low = mid + 1;
    else /* found match */
      return mid;
  }
  return -1; /* no match */
}

int databuffer[] = {1,2,3,4,5,6,7,8,9,10};

int main ()
{
	int index = -1;
	int data = -1;
	
	data = 5;
	
	if ((index = binsearch(data,databuffer,(sizeof(databuffer)/sizeof(int)))) != -1) 
		printf("data %d found at index = %d\n",data, index);
	else		
		printf("data %d not found\n", data);

	data = 11;
	
	if ((index = binsearch(data,databuffer,(sizeof(databuffer)/sizeof(int)))) != -1) 
		printf("data %d found at index = %d\n",data, index);
	else		
		printf("data %d not found\n", data);
		
}

