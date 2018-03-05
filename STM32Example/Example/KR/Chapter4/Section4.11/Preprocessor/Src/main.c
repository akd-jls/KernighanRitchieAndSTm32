

/* File Inclusion */

/*
if the name is enclosed in < and >, searching follows an implementation-defined rule to find the file.
*/
#include <stdio.h>  

/* 
If the filename is quoted, searching for the file typically begins where the source program was found 
if it is not found there, searching follows an implementation-defined rule to find the file.
*/
#include "main.h"



/* Macro Substitution */

#define name replacement text        /* the replacement text is the rest of the line, ofcourse excluding the comments*/

/* 
Be careful about warning: warning:  #2969-D: "\" followed by white space is not a line splice 
So don't keep any white space after back slash
Can have white space before back slash AND can have white space before the next line string
*/
#define NAME replacement   \
											text        /* a long definition may be continued onto several lines by placing a \ at the end of each line to be continued*/


#define forever for (;;) /* infinite loop */

#define max(A, B) ((A) > (B) ? (A) : (B))

/* Some care also has to be taken with parentheses to make sure the order of evaluation is preserved */

#define square(x) x * x /* WRONG */

/* Names may be undefined with #undef */
#undef NAME

#define NAME new replacement text



/*
 
*/

											
int main(void)
{
  printf("*** Macro Substitution ***\n");
	printf("The %s is replaced with \"%s\"\n","name", MAKE_STRING(name)); /* with printf you have to use the "name" word in 2 places, which is error prone*/
	printf("The %s is replaced with \"%s\"\n","NAME", MAKE_STRING(NAME));
	
//printf("The %s is replaced with \"%s\"\n","name", name); /* without MAESTRING, the compiler will throw error, because the replace 'replacement text' is not a string, missing the quotes*/

  printf("the max of %d and %d is %d\n", 3, 5, max(3,5));
	
	
	int p = 5, q = 7, r = 1, s = 0;
  printf("the max of %d and %d is %d\n", p, q, max(p,q));
  printf("the max of %d and %d is %d\n", p + q, r + s, max(p + q, r + s));


	/*** The pitfalls of #define ***/
	printf("\n\n*** The pitfalls of #define ***\n");
  int i = 10, j = 15;
	/*	The expressions are evaluated twice; this is bad if they involve side effects like increment operators or input and output. 	*/
	/* output is wrong*/
  printf("the max of ++ of %d and ++ %d is %d\n",i ,j , max(i++, j++)); /* complier is already giving warning*/


/* Some care also has to be taken with parentheses to make sure the order of evaluation is preserved */
  printf("\n\n***Some care also has to be taken with parentheses to make sure the order of evaluation is preserved***\n");
	
  int z = 9;
	
	printf("square(%d + 1) is %d\n",z, square(z+1));
	
	printf("   ...the correct value should be... %d\n", ((z+1)*(z+1)));

  /* Names may be undefined with #undef */
  printf("\n\nNames may be undefined with #undef\n");
	dprint(NAME);
	
	
	printf("\n\n*** Stringizing operator # ***\n");
	
	/*
		Formal parameters are not replaced within quoted strings. 
		If, however, a parameter name is preceded by a # in the replacement text, the combination will be expanded into a quoted string
		with the parameter replaced by the actual argument. 
		This can be combined with string concatenation to make, for example, a debugging print macro:	
		#define dprint(expr) printf(#expr " = %g\n", expr)
	*/
	
	#define greetings1(x) "hello x"			/* Formal parameters are not replaced within quoted strings*/
	#define greetings3(x) "hello " #x   /* If a parameter name is preceded by a # in the replacement TEXT, the combination will be expanded into a quoted string*/
	#define greetings2(x) "hello #x"    /* If a parameter name is preceded by a # in the replacement STRING, the combination will NOT be expanded into a quoted string*/
	#define greetings4(x) hello  #x
	
	printf("%s\n", greetings1(good morning));
	printf("%s\n", greetings2(good morning));
	printf("%s\n", greetings3(good morning));
//printf("%s\n", greetings4(good morning)); /* compiler error */
	
	printf("%s\n", greetings1("good morning"));
	printf("%s\n", greetings2("good morning"));
	printf("%s\n", greetings3("good morning"));	
//printf("%s\n", greetings4("good morning"));	/* compiler error */

  printf("\n\n*** How to make a char string from a C macro's value? ***\n");

#define eprint(expr) printf(#expr " = %g\n", expr)  /* expression print*/
	
	double x = 10, y = 2;
	eprint(x/y);

  printf("\n\n*** How to make a char string from a C macro's name? ***\n");
	
#define PRINT_SRTING facebook	

	dprint(PRINT_SRTING);	

	printf("\n\n*** Concatenation operator ## ***\n");

#define STRING1 	face
#define STRING2 	book
	printf("NOT replaced by its actual argument before ‘##’ executes\n");
	printf("	## operator: %s\n", MAKE_STRING(paste_(STRING1,  STRING2))); /*NOT replaced by its actual argument before ‘##’ executes*/

	printf("replaced by its actual argument before ‘##’ executes\n");
	printf("	## operator: %s\n", MAKE_STRING(paste(STRING1,  STRING2)));  /*replaced by its actual argument before ‘##’ executes*/

	printf("	## operator: %s\n", MAKE_STRING(paste_(face,  book))); /*replaced by its actual argument before ‘##’ executes*/
	printf("	## operator: %s\n", MAKE_STRING(paste(face,  book)));  /*replaced by its actual argument before ‘##’ executes*/


  forever;

}				

