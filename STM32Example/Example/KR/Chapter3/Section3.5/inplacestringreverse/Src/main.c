

#include <stdio.h>
#include <string.h>
/* reverse: reverse string s in place */

void reverse(char s[])
{
  int c, i, j;
  for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

char databuffer[] = "hello, world";

int main ()
{
	
	printf("initial string: ");
  printf("%s\n", databuffer);

	reverse(databuffer);

	printf("reverse string: ");
  printf("%s\n", databuffer);}
