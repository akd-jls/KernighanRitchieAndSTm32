#include <stdio.h>

int main ()
{
  /* The below declaration defines an array of size 10, that is, a block of 10 consecutive objects named a[0], a[1], ...,a[9]. */
	int a[10];  
	
	/* The notation a[i] refers to the i-th element of the array. */
	
	int *pa; 			/* pa is a pointer to an integer */
	
	pa = &a[0];  	/* sets pa to point to element zero of a; that is, pa contains the address of a[0]. */
	
	int x;
	
	x = *pa; 			/* will copy the contents of a[0] into x */

  /*
	If pa points to a particular element of an array, then by definition pa+1 points to the next
	element, pa+i points i elements after pa, and pa-i points i elements before. */

	x = *(pa+1);  /* Thus, if pa points to a[0], *(pa+1) 	refers to the contents of a[1] */

	
	int i = 5;
	
	pa = &a[0];   /* bring back pa to address of a[0] for below example line, else pa will poin to a[1+5]*/
	
	x = *(pa+i); /* pa+i is the address of a[i], and *(pa+i) is the contents of 	a[i] */

	return 0;

}
