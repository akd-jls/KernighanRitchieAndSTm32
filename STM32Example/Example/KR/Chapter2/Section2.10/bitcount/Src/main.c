
#include <stdio.h>


/* bitcount: count 1 bits in x */
int bitcount(unsigned x)
{
  int b;
  for (b = 0; x != 0; x >>= 1)
    if (x & 01)
      b++;
  return b;
}

int main ()
{
	
	int x = 0;
	
	printf("bitcount: count 1 bits in x.\n");
	printf("Enter number:");
	scanf("%d",&x);
  printf("%d\n",x);
	
	printf("bits: %d\n", bitcount(x));
	
	return 0;

}
