
#include <stdio.h>


/* EOF is defined as below in stdio.h file
 #define EOF      (-1)

We need to end of tranfer from Host Windows System keyboard.
So we use ctrl+d in windows. crtl+d is 0x04 is END of transmission in ASCII table. 
 */
#undef  EOF
#define EOF 0x04 /* warning:  incompatible redefinition of macro "EOF"  */


	
/* count characters in input; 1st version */
int main()
{
  long nc;
  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);
}

