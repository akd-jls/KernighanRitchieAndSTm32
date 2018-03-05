
#include <stdio.h>

#undef  EOF
#define EOF 0x04


/*
The parentheses around the assignment, within the condition are necessary. The precedence of
!= is higher than that of =, which means that in the absence of parentheses the relational test !=
would be done before the assignment =. So the statement

	c = getchar() != EOF
	
	is equivalent to
	
	c = (getchar() != EOF)

This has the undesired effect of setting c to 0 or 1, depending on whether or not the call of
getchar returned end of file.
*/


int main()
{
	int c;
	
	while ((c = getchar()) != EOF)
		putchar(c);
}
