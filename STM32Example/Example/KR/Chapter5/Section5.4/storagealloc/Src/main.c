
#include <stdio.h>

#define ALLOCSIZE 1000 /* size of available space */
static char allocbuf[ALLOCSIZE]; /* storage for alloc */
static char *allocp = allocbuf; /* next free position */
char *alloc(int n) /* return pointer to n characters */
{
  if (allocbuf + ALLOCSIZE - allocp >= n) { /* it fits */
    allocp += n;
    return allocp - n; /* old p */
  } else /* not enough room */
    return 0;
}
void afree(char *p) /* free storage pointed to by p */
{
  if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
    allocp = p;
}

int main()
{
	char *p1 = NULL;
	char *p2 = NULL;
	char *p3 = NULL;
	
	p1 = alloc(100);
	if(p1 == 0)
		printf("alloc failed of size 100\n");
	else
		printf("alloc passed on size 100\n");
	
	p2 = alloc(500);
	if(p2 == 0)
		printf("alloc failed of size 500\n");
	else
		printf("alloc passed on size 500\n");
	
	p3 = alloc(500);
	if(p3 == 0)
		printf("alloc failed of size 500\n");
	else
		printf("alloc passed on size 500\n");
		
		
	if(p1 != 0)	
	{
		afree(p1);
		printf("freed alloc 100\n");
	}
	else
		printf("can't call afree. NOT a valid pointer\n");
		
	if(p2 != 0)
	{
		afree(p2);
		printf("freed alloc 500\n");
	}
	else
		printf("can't call afree. NOT a valid pointer\n");

	if(p3 != 0)
	{
		afree(p2);
		printf("freed alloc 500\n");
	}
	else
		printf("can't call afree. NOT a valid pointer\n");

	return 0;
}
