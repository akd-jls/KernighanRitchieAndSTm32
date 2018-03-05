#include <stdio.h>


#undef  EOF
#define EOF 0x04 /* warning:  incompatible redefinition of macro "EOF"  */

	
/* count lines in input */
int main()
{
  int c, nl;
  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\r') /* we are running this code in Windows PC. Here we get '\r' as Line end. */
      ++nl;        /* So we changed the code from '\n' to '\r' */
  printf("%d\n", nl);
}

