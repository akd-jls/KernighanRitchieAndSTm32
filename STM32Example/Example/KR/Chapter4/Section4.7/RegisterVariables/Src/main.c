
#include <stdio.h>  

/* error:  #149: a global-scope declaration may not have this storage class*/ 
/* 
register int y; 
*/

/* The __global_reg storage class specifier causes the compiler to reserve a register for a specific global variable. */
/* This example declares a global variable y and reserves r5 for it: */
__global_reg(2) int y; // r5 is reserved for y 

	
int main(void)      		
{
  /* Using the ARM compiler, you can declare any number of local objects to have the storage class register. */
	register int x;
	register char c;

	register float speed = 6.7; /* Don't begin variable names with underscore, however, since library routines often use such names*/
	
	register char world_string[] = "hello, world";  /* It's wise to choose variable names that are related to the purpose of the variable, and that are
																					  unlikely to get mixed up typographically. */

	
  printf("%f \n", speed);	
	
	
	return 0;													
}




void f(register unsigned m, register long n)
{
	register int i;
}