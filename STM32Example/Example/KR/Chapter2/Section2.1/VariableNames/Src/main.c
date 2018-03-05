
#include <stdio.h>  

#define SUCCESS	 0   /* Traditional C practice is to use lower case for variable names, and all upper case for symbolic constants.*/
#define FAIL		-1

int run_count = 100; /* it is sometimes useful for improving the readability of long variable names.*/
int Run_count = 0;   /* Upper and lower case letters are distinct, so r and R are two different names.*/

int run_counT = 100; /* For external names, the standard guarantees uniqueness only for 6 characters and a single case.*/
int run_couNt = 100; /* Bad variable name, no uniqueness in first 6 characters.*/
int run_couNT = 100; /* Bad variable name, no uniqueness in first 6 characters*/

void FormattedPrint(char *source);

int main(void)      		
{
	float speed = 6.7; /* Don't begin variable names with underscore, however, since library routines often use such names*/
	
	char world_string[] = "hello, world";  /* It's wise to choose variable names that are related to the purpose of the variable, and that are
																					  unlikely to get mixed up typographically. */

	for(int i = 0; i < 1; i++)	/* We tend to use short names for local variables, especially loop indices, and longer names for external variables.*/
		FormattedPrint(world_string);
	
  printf("%f \n", speed);	
	
/* char if = 'i'; */	/* Keywords like if, else, int, float, etc., are reserved: you can't use them as variable names. */
	
	return SUCCESS;													
}


void FormattedPrint(char *source)
{
	printf("%s\n",source);
}
