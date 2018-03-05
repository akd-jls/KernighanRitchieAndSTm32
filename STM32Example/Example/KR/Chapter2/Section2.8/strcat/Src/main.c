
#include <stdio.h>

#undef  EOF
#define EOF 0x04 /* warning:  incompatible redefinition of macro "EOF"  */


/* strcat: concatenate t to end of s; s must be big enough */
void strcat(char s[], char t[])
{
  int i, j;
  i = j = 0;
  while (s[i] != '\0') /* find end of s */
    i++;
  while ((s[i++] = t[j++]) != '\0') /* copy t */
    ;
}

int main ()
{
	char head[110]; 
	char tail[50]; 
	char format[10];

	snprintf(format, sizeof(format), "%%%ds", sizeof(head)-1);
	printf("Enter head: ");
	scanf(format,head);
	printf("\n");
	printf("Entered head: %s\n", head);

	
	snprintf(format, sizeof(format), "%%%ds", sizeof(tail)-1);
	printf("Enter tail: ");
	scanf(format,tail);
	printf("\n");
	printf("Entered tail: %s\n", tail);

	strcat(head,tail);
  printf("head + tail: %s\n", head);
	
	return 0;

}
