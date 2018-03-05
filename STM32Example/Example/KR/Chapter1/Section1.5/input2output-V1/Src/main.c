#include <stdio.h>

#undef  EOF
#define EOF 0x04 /* warning:  incompatible redefinition of macro "EOF"  */


	
/* copy input to output; 1st version */


int main()
{
  int c;
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();

  }
}

