
#include <stdio.h>  

int x = 1;
char squota = '\'';
long day = 1000L * 60L * 60L * 24L; /* milliseconds/day */
	
int main(void)      		
{
	int x = 1;
	char squota = '\'';
	long day = 1000L * 60L * 60L * 24L; /* milliseconds/day */
	
	/*
	When the size of the array is omitted, the compiler will compute the length by counting the
  initializers, of which there are 12 in this case.
	*/
	int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	return 0;													
}



void Examplefunction(int n)
{
	int x = 10 * n;
	char squota = '\'';
	long day = 1000L * 60L * 60L * 24L; /* milliseconds/day */
	
	/*
	If there are fewer initializers for an array than the specified size, the others will be zero for
  external, static and automatic variables.
	*/
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30 }; 
	
	/* It is an error to have too many initializers. Here it is giving warning*/
	int days_extra[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 0 };
	
}