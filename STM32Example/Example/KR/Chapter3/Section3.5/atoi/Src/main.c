

#include <stdio.h>
#include <ctype.h> /* For isspace and  isdigit*/

/* atoi: convert s to integer */
/* atoi: convert s to integer; version 2 */
int atoi(char s[])
{
  int i, n, sign;
  for (i = 0; isspace(s[i]); i++) /* skip white space */
    ;
  sign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-') /* skip sign */
    i++;
  for (n = 0; isdigit(s[i]); i++)
    n = 10 * n + (s[i] - '0');
  return sign * n;
}


int main ()
{
	char buffer[11]; 				/* MAX 10 char + 1 for '\0' */
	
	printf("Enter number: ");

	scanf("%10s",buffer);
	printf("\n");
	
	printf("Entered number: %d", atoi(buffer));
	
	return 0;

}
