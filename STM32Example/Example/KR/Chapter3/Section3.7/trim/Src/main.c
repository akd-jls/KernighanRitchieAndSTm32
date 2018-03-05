

#include <stdio.h>
#include <ctype.h> /* For isspace and  isdigit*/
#include <string.h>

#undef  EOF
#define EOF 0x04 /* warning:  incompatible redefinition of macro "EOF"  */

/* trim: remove trailing blanks, tabs, newlines */
int trim(char s[])
{
  int n;
  for (n = strlen(s)-1; n >= 0; n--)
    if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
      break;
  s[n+1] = '\0';
  return n;
}


int main ()
{
	char buffer[110]; //MAX 10 char + 1 for '\0'
	int n = 0;
	int i = 0;

	
	printf("Enter string: ");
	
	
  while ((buffer[i++] = getchar()) != EOF);
	
	buffer[--i]='\0'; /* -- to raplace EOF with null and to end the string */
	n = strlen(buffer);
	printf("Entered string lenght: %d\n", n);

	trim(buffer);
	printf("Trimmed string: %s\n", buffer);
	n = strlen(buffer);
	printf("Trimmed string lenght: %d\n", n);
	
	return 0;

}
