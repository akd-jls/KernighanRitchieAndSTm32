

#include <stdio.h>
#include <ctype.h> /* For isspace and  isdigit*/
#include <string.h>

/* reverse: reverse string s in place */
void reverse(char s[])
{
  int c, i, j;
  for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
    c = s[i], s[i] = s[j], s[j] = c;
  }
}

/* itoa: convert n to characters in s */
void itoa(int n, char s[])
{
  int i, sign;
  if ((sign = n) < 0) /* record sign */
    n = -n; /* make n positive */
  i = 0;
  do { /* generate digits in reverse order */
    s[i++] = n % 10 + '0'; /* get next digit */
  } while ((n /= 10) > 0); /* delete it */
  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}


int main ()
{
	char buffer[11]; /* MAX 10 char + 1 for '\0' */
	int n;
	
	printf("Enter number: ");

	scanf("%d",&n);
	printf("\n");
	itoa(n,buffer);
	printf("Entered number: %s", buffer);
	
	return 0;

}
