
#include <stdio.h>

/* strlen: return length of string s */
int strlen(char *s)
{
  int n;
  for (n = 0; *s != '\0'; s++)
    n++;
  return n;
}


int main ()
{
	char array[100] = "hello, world";
	char *ptr = NULL;
	int len = 0;

	len = strlen("hello, world"); /* string constant */
	printf(" strlen(\"hello, world\") : %d\n", len);
	
	/* IMPORTANT */
	len = 0;
	len = sizeof("hello, world"); /* sizeof(string constant), also includes NULL char. so the size 1 + number of char */
	printf(" sizeof(\"hello, world\") : %d\n", len);

	
	len = 0;
	len = strlen(array); /* strlen only will measure char in the array[100], not the complete array allocation */
	printf(" strlen(array[100]) : %d\n", len);
	
	len = 0;
	len = sizeof(array); /* char array[100]; */
	printf(" sizeof(array[100]) : %d\n", len);
	
	ptr = array;  /* char pointer to char array[100]; */
	len = 0;
	len = strlen(ptr); /* strlen will measure char in the buffer pointed by ptr */
	printf(" strlen(ptr) : %d\n", len);
	
	len = 0;
	len = sizeof(ptr); /* sizeof will measure the size of pointer, which is always 4 bytes for all pointer in 32 bit systems */
	printf(" sizeof(ptr) : %d\n", len);
	
	return 0;

}
