

#include <stdio.h>
#include <limits.h>
/***
INT_MAX Maximum value of int  2147483647 0x7FFFFFFF // MAX 10 char
INT_MIN Minimum value of int –2147483648 0x80000000 // MAX 10 char

***/
/*
Handles bigger than INT_MAX, returns 0. Still can't handle negative number

int atoi(char s[])
{
  int i;
	long long n;
  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10 * n + (s[i] - '0');
  return (n > INT_MAX? 0:n);
}

*/

/* atoi: convert s to integer */
/*
many limitations in this atoi. if you enter bigger than INT_MAX, you should get garbage.
*/
int atoi(char s[])
{
  int i, n;
  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10 * n + (s[i] - '0');
  return n;
}



int main ()
{
	char buffer[11]; //MAX 10 char + 1 for '\0'
	
	printf("Enter number: ");
//	char format[10];
//	snprintf(format, sizeof(format), "%%%ds", sizeof(buffer)-1);
//	scanf(format,buffer);
	scanf("%10s",buffer);
	printf("\n");
	
	printf("Entered number: %d", atoi(buffer));
	
	return 0;


}
