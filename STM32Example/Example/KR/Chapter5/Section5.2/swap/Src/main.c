
#include <stdio.h>

void swap(int *px, int *py); /* interchange *px and *py */
void swap_wrong(int x, int y); /* WRONG */

int main ()
{
	int a = 5, b = 10;
	
	printf("initial value: a = %d, b = %d\n", a,b);
	
	swap_wrong(a,b);

	printf("swap_wrong call value: a = %d, b = %d\n", a,b);

	swap(&a, &b);

	printf("swap call value: a = %d, b = %d\n", a,b);
	
	return 0;


}

void swap(int *px, int *py) /* interchange *px and *py */
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}

void swap_wrong(int x, int y) /* WRONG */
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
