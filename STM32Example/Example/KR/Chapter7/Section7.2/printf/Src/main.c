#include <stdio.h>
#include <ctype.h>

#undef  EOF
#define EOF 0x04 /* warning:  incompatible redefinition of macro "EOF"  */

#include <stdio.h>
#include <ctype.h>
main() /* lower: convert input to lower case*/
{
	char *string = "hello, world";
	
	printf(":%s:",string); printf("\n");
	printf(":%10s:",string); printf("\n");
	printf(":%.10s:",string); printf("\n");
	printf(":%-10s:",string); printf("\n");
	printf(":%.15s:",string); printf("\n");
	printf(":%-15s:",string); printf("\n");
	printf(":%15.10s:",string); printf("\n");
	printf(":%-15.10s:",string); printf("\n");

  return 0;
}
