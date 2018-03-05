
#include <stdio.h>


/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
  return (x >> (p+1-n)) & ~(~0 << n);
}
int main ()
{
	
	int x, n , p = 0;
	
	printf("getbits: returns right adjusted n-bit field of x that begins at position p.\n");
	printf("Enter number:");
	scanf("%d",&x);
  printf("%d\n",x);
	printf("Enter position:");
	scanf("%d",&p);
  printf("%d\n",p);
	printf("Enter bits:");
	scanf("%d",&n);
  printf("%d\n",n);
	
	printf("bits: 0x%X\n", getbits(x,p,n));
	
	return 0;

}
