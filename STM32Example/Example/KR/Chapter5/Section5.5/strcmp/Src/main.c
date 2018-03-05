
#include <stdio.h>

/*
The routine will compare the character strings s and t, and 
returns negative, zero or positive if s is lexicographically less than, equal to, or greater than t. 
The value is obtained by subtracting the characters at the first position where s and t disagree.

*/


/* strcmp: return <0 if s<t, 0 if s==t, >0 if s>t */
int strcmp(char *s, char *t)
{
  int i;
  for (i = 0; s[i] == t[i]; i++)
    if (s[i] == '\0')
      return 0;
  return s[i] - t[i];
}

/* strcmp: return <0 if s<t, 0 if s==t, >0 if s>t */
int strcmp_v2(char *s, char *t)
{
  for ( ; *s == *t; s++, t++)
    if (*s == '\0')
      return 0;
  return *s - *t;
}

int main ()
{
	char array_s[100] = "hello, world";
	char array_t[100] = "hello, world";
	char array_t2[100] = "hello,";
	char array_t3[100] = "hello, world!";
	
	int Field_width = 40;
	
	printf("strcmp array version\n");
	
	printf("%-*s: %d\n",Field_width,"strcmp(\"hello, world\", \"hello, world\")", strcmp(array_s, array_t));
	printf("%-*s: %d\n",Field_width,"strcmp(\"hello, world\", \"hello,\")", strcmp(array_s, array_t2));
	printf("%-*s: %d\n",Field_width,"strcmp(\"hello, world\", \"hello, world!\")", strcmp(array_s, array_t3));
	
	printf("strcmp pointer version\n");
	
	printf("%-*s: %d\n",Field_width,"strcmp(\"hello, world\", \"hello, world\")", strcmp(array_s, array_t));
	printf("%-*s: %d\n",Field_width,"strcmp(\"hello, world\", \"hello,\")", strcmp(array_s, array_t2));
	printf("%-*s: %d\n",Field_width,"strcmp(\"hello, world\", \"hello, world!\")", strcmp(array_s, array_t3));

	return 0;

}
