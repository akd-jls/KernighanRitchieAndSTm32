
#include <stdio.h>

#undef  EOF
#define EOF 0x04 /* warning:  incompatible redefinition of macro "EOF"  */


/* lower: convert c to lower case; ASCII only */
int lower(int c)
{
  if (c >= 'A' && c <= 'Z')
    return c + 'a' - 'A';
  else
    return c;
}


int main ()
{
	char c = 0;

	while (c != EOF)
	{
		putchar(lower(c = getchar()));
	}
	
	return 0;

}
