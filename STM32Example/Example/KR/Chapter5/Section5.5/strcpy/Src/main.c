
#include <stdio.h>

/* strcpy: copy t to s; array subscript version */
void strcpy_as(char *s, char *t)
{
  int i;
  i = 0;
  while ((s[i] = t[i]) != '\0')
    i++;
}

/* strcpy: copy t to s; pointer version */
void strcpy_pv(char *s, char *t)
{

  while ((*s = *t) != '\0') {
    s++;
    t++;
  }
}

/* strcpy: copy t to s; pointer version 2 */
void strcpy_pv2(char *s, char *t)
{
  while ((*s++ = *t++) != '\0')
    ;
}

/* strcpy: copy t to s; pointer version 3 */
void strcpy_pv3(char *s, char *t)
{
  while (*s++ = *t++)
    ;
}

int main ()
{
	char array_t[100] = "hello, world";
	char array_s[100] = "\0";
	
	strcpy_as(array_s, array_t);
  printf("%-30s: %s\n","strcpy (array subscript version)", array_s);
	
	strcpy_as(array_t,"hello, good morning");
	
	strcpy_pv(array_s, array_t);
  printf("%-32s: %s\n","strcpy (pointer version)", array_s);
	
	strcpy_pv(array_t, "hello, how are you");

	strcpy_pv2(array_s, array_t);
  printf("%-32s: %s\n","strcpy (pointer version 2)", array_s);

	strcpy_pv2(array_t, "hello, how's the weather");
	
	strcpy_pv3(array_s, array_t);
  printf("%-32s: %s\n","strcpy (pointer version 3)", array_s);

	return 0;

}
