

#include <stdio.h>
#include "calc.h"

#define MAXVAL  100 /* maximum depth of val stack */

/*
Static storage is specified by prefixing the normal declaration with the word static.
no other routine will be able to access sp and val, and those names will not conflict
with the same names in other files of the same program
*/
static int    sp = 0; 			 /* next free stack position */
static double val[MAXVAL];  /* value stack */


static void poperror(void);
static void pusherror(double f);

/* push: push f onto value stack */
void push(double f)
{
  if (sp < MAXVAL)
    val[sp++] = f;
  else
		pusherror(f);
}
/* pop: pop and return top value from stack */
double pop(void)
{
  if (sp > 0)
    return val[--sp];
  else {
    poperror();
    return 0.0;
  }
}

/*
The external static declaration is most often used for variables, but it can be applied to
functions as well. Normally, function names are global, visible to any part of the entire
program. If a function is declared static, however, its name is invisible outside of the file in
which it is declared.
*/
static void poperror(void)
{
	printf("pop error: stack empty\n");
}

static void pusherror(double f)
{

/*
The static declaration can also be applied to internal variables. Internal static variables are
local to a particular function just as automatic variables are, but unlike automatics, they remain
in existence rather than coming and going each time the function is activated. This means that
internal static variables provide private, permanent storage within a single function
*/
	static int error_count = 0;
	
	
	error_count++;
  printf("push error: stack full, can't push %g\n", f);
	
  printf("push error: %d times\n", error_count);
	
}


