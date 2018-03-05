
#include <stdio.h>
#include <ctype.h> /* For isspace and  isdigit*/

/* atof: convert string s to double */
double atof(char s[])
{
  double val, power;
  int i, sign;
  for (i = 0; isspace(s[i]); i++) /* skip white space */
    ;
  sign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-')
    i++;
  for (val = 0.0; isdigit(s[i]); i++)
    val = 10.0 * val + (s[i] - '0');
  if (s[i] == '.')
    i++;
  for (power = 1.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
    power *= 10;
  }
  return sign * val / power;
}

int main ()
{
	char buffer[11]; /* MAX 10 char + 1 for '\0' */
	
	printf("Enter number: ");

	scanf("%10s",buffer);
	printf("\n");
	
	printf("Entered number: %g", atof(buffer));
	
	return 0;

}
