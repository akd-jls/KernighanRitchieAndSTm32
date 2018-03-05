
#include <stdio.h>

/* strlen: return length of s */

int strlen(char s[]);

int a = 1234;				/* An integer constant */
long l = 123456789L; /* A long constant is written with a terminal l */
long b = 123456789;  /* an integer constant too big to fit into an int will also be taken as a long */
int c = 12345678u;  /* Unsigned constants are written with a terminal u or U */
unsigned long ul = 1234567812UL; /* the suffix ul or UL indicates unsigned long. */

float f1 = 123.4;   /* Floating-point constants contain a decimal point */
float f2 = 1e-2;    /* Floating-point constants contain a decimal point or an exponent */
float f3 = 123.4e-3;/* Floating-point constants contain a decimal point (123.4) or an exponent (1e-2) or both */
float f4 = 123.4e-4;/* their type is double, unless suffixed*/
double d = 1e-2f;   /* The suffixes f or F indicate a float constant*/ 
long double ld = 1e-2l; /* l or L indicate a long double*/

int main ()
{

  /* d : int :  Signed decimal number. */
  printf("%-20s = %d\n","An integer constant", 1234);
	/* l or L immediately precede the type character 'd' to specify long types for d */
  printf("%-20s = %ld\n","A long constant is written with a terminal l", 123456789L);
	/* u : unsigned int	: Unsigned decimal number. */
  printf("%-20s = %u\n","Unsigned constants are written with a terminal u or U", 123456789u);
	/* %lld : long long :  The ARM compiler supports 64-bit integer types through the type specifiers long long and unsigned long long.*/
  printf("%-20s = %lld\n","an integer constant too big to fit into an int will also be taken as a long ", 12345678912);
	/* %llu : unsigned long long :  The ARM compiler supports 64-bit integer types through the type specifiers long long and unsigned long long.*/
  printf("%-20s = %llu\n","the suffix ul or UL indicates unsigned long", 123456789123UL);
	
	printf("\n\n");
	/* f	float	Floating-point number formatted as dddd.dddd. */
  printf("%-20s = %f\n","Floating-point constants contain a decimal point", 123.4);
  printf("%-20s = %f\n","Floating-point constants contain a decimal point or an exponent", 12340e-2);
	/* e	float	Floating-point number formatted as d.dddd<e>dd. */
  printf("%-20s = %e\n","Floating-point constants contain a decimal point", 123.4);
  printf("%-20s = %e\n","Floating-point constants contain a decimal point or an exponent", 12340e-2);
	/* E	float	Floating-point number formatted as d.dddd<E>dd */
  printf("%-20s = %E\n","Floating-point constants contain a decimal point (123.4) or an exponent (1e-2) or both", 123400.0e-3);
	/* g	float	Floating-point number using either the e or f format, whichever is more compact for the specified value and precision.*/
  printf("%-20s = %g\n","their type is double, unless suffixed", 123.4e-4);
  printf("%-20s = %g\n","The suffixes f or F indicate a float constant", 1e-2f);


	printf("\n\n");
	char test_string[] = "hello, world"; /* string constant */
	char c = 'x'; 											 /* character constant */
	
	printf("strlen of string constant \"hello, world\": %d\n",strlen(test_string));
}

int strlen(char s[])
{
  int i = 0; /* initlialzed to 0, not in K&R code. without this wrong size returned. */
  while (s[i] != '\0')
    ++i;
  return i;
}
