

/*
The function getint that performs free-format input conversion by
breaking a stream of characters into integer values, one integer per call. 
getint returns the value it found and also signal end of file when there is no more input. 

How to run:

enter your number and at the end press "enter"
you can enter multiple lines like above.
At the end press Ctrl+D, to signal end of file.
*/

#include <stdio.h>
#include <ctype.h> 	/* For isspace and  isdigit*/

#undef  EOF
#define EOF 		0x04 		/* warning:  incompatible redefinition of macro "EOF"  */
#define BUFSIZE 100
#define SIZE 		20

char buf[BUFSIZE]; 	/* buffer for ungetch */
int bufp = 0; 			/* next free position in buf */

int getch(void);
void ungetch(int);


int main ()
{
	int n, array[SIZE], getint(int *);
	for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++);
	
	
	for (int i = 0; i < n; i++)
		printf("%d\n",array[i]);
	printf("end\n");	
	
	return 0;

}

/* getint: get next integer from input into *pn */
int getint(int *pn)
{
  int c, sign;
  while (isspace(c = getch())) /* skip white space */
    ;
  if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
    ungetch(c); 	/* it is not a number */
    return 0;			/* return zero if the next input is not a number, */
  }
  sign = (c == '-') ? -1 : 1;
  if (c == '+' || c == '-')
    c = getch();
  for (*pn = 0; isdigit(c); c = getch())
    *pn = 10 * *pn + (c - '0');           /* return positive value if the input contains a valid number */
  *pn *= sign;
  if (c != EOF)
    ungetch(c);
  return c;				/* return EOF for end of file */
}

int getch(void) 		/* get a (possibly pushed-back) character */
{
  return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) /* push character back on input */
{
  if (bufp >= BUFSIZE)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}

