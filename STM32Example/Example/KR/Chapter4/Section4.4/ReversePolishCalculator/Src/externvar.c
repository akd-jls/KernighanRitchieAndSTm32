

#define BUFSIZE 100
#define MAXVAL  100 /* maximum depth of val stack */

char   buf[BUFSIZE]; /* buffer for ungetch */
int    bufp = 0; 		 /* next free position in buf */
int    sp = 0; 			 /* next free stack position */
double val[MAXVAL];  /* value stack */

