#include <stdio.h>

/* test power function */
int power(int m, int n);

int main()
{
  int n;
	n = 5;
	printf("%-32s n = %d\n","before calling power()", n);
	power(2,n);
	printf("%-32s n = %d\n","after calling power()", n);
	
	printf("\n");
	printf("notice the difference between value of 'n' inside and outside power()\n");
	printf("change in value of 'n' inside power() has no effect on value of 'n' outside power()\n");
	printf("'n' inside power() and 'n' outside power() are two different variables\n");
	
  return 0;
}

/* power: raise base to n-th power; n >= 0; version 2 */
int power(int base, int n)
{
  int p;

	printf("%-32s n = %d\n","inside power() initial value of", n);
	
  for (p = 1; n > 0; --n)
    p = p * base;

	printf("%-32s n = %d\n","inside power() final value of", n);

  return p;
}

