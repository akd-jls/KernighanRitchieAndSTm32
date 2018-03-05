
#include <stdio.h>

int main ()
{
  /* The below declaration defines an array of size 10, that is, a block of 10 consecutive objects named a[0], a[1], ...,a[9]. */
	int a[10] = {50,31,72,13,84,95,26,7,48,69};  /* each element is initialized from 0 to 9 for index 0 to 9*/
	
	int j;
	printf("contents of array elemets: 10 elements array\n");
	for( j = 0; j < 10; j++)
	{
		printf("a[%d] = %d, ",j, a[j]);
	}
	printf("\n\n");
	printf("address of array elemets: 10 elements array\n");
	for( j = 0; j < 10; j++)
	{
		printf("&a[%d] = %p, ",j, &a[j]);
	}	
	printf("\n\n");
	
	/* The notation a[i] refers to the i-th element of the array. */
	
	int *pa = NULL; 			/* pa is a pointer to an integer , initialized to NULL*/
	
	pa = &a[0];  	/* sets pa to point to element zero of a; that is, pa contains the address of a[0]. */
	
	printf("address of a[0] = 0x%p, address of pa = 0x%p\n", &a[0], pa);
	
	int x;
	
	x = *pa; 			/* will copy the contents of a[0] into x . so x is 50*/

	printf("content of a[0] = %d, content of *pa = %d, content of x = %d\n", a[0], *pa, x);

  /*
	If pa points to a particular element of an array, then by definition pa+1 points to the next
	element, pa+i points i elements after pa, and pa-i points i elements before. */

	x = *(pa+1);  /* Thus, if pa points to a[0], *(pa+1) 	refers to the contents of a[1], so x is 31 */

	printf("content of a[1] = %d, content of *(pa+1) = %d, content of x = %d\n", a[1], *(pa+1), x);
	
	int i = 5;
	
	pa = &a[0];   /* bring back pa to address of a[0] for below example line, else pa will poin to a[1+5]*/
	
	x = *(pa+i); /* pa+i is the address of a[i], and *(pa+i) is the contents of a[i], so x is 95 */

	printf("content of a[5] = %d, content of *(pa+5) = %d, content of x = %d\n", a[5], *(pa+5), x);
	
	/*
	Since the name of an array is a synonym for the location of the initial element, 
	the assignment pa=&a[0] can also be written as pa = a;
	*/
	
	pa = a;

	printf("address of a[0] = 0x%p, address of a = 0x%p, address of pa = 0x%p\n", &a[0], a, pa);
	printf("\n\n");
	
	/* a reference to a[i] can also be written as *(a+i) */
	
	printf("content of 9th element of array 'a' as *(a+9) = %d\n", *(a+9));
	
	/* &a[i] and a+i are also identical: a+i is the address of the i-th element beyond a*/
	printf("address of 9th element of array 'a' as &a[9] = %p and as (a+9) = %p\n", &a[9],(a+9));

  /* if pa is a pointer, expressions might use it with a subscript; pa[i] is identical to *(pa+i) */
	printf("content of 9th element of array 'a' as pa[9] = %d and as *(pa+9) = %d\n", pa[9], *(pa+9));

  /****
	In short, an array-and-index expression is equivalent to one written as a pointer and offset. 
	*****/
	
	/****
	There is one difference between an array name and a pointer that must be kept in mind. A
	pointer is a variable, so pa=a and pa++ are legal. But an array name is not a variable;
	constructions like a=pa and a++ are illegal.
	****/
	
	/* remove the below comment and see compiler giving error. */
	/*
	a=pa; 
	a++;
	*/
	
	pa = a + 9;
	
	printf("content of 8th element of array 'a' as pa[-1] = %d and as 7th element as pa[-2] = %d\n", pa[-1], pa[-2]);
	
	return 0;

}
