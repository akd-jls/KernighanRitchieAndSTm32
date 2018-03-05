
#include <stdio.h>  
#include <limits.h>

#define SUCCESS	 0   /* Traditional C practice is to use lower case for variable names, and all upper case for symbolic constants.*/

enum boolean { NO, YES };
enum result { TRUE = 0x10000000, FALSE = 0};

int main(void)      		
{
	char   c;
	short  s;
	int    i;
	long   l;
	float  f;
	double d;										
	long double ld;
	
	printf("%-20s = %d\n","sizeof(char)", sizeof(char));
	printf("%-20s = %d\n","sizeof(short)", sizeof(short));
	printf("%-20s = %d\n","sizeof(int)", sizeof(int));
	printf("%-20s = %d\n","sizeof(long)", sizeof(long));
	printf("%-20s = %d\n","sizeof(float)", sizeof(float));
	printf("%-20s = %d\n","sizeof(double)", sizeof(double));
	printf("%-20s = %d\n","sizeof(long double)", sizeof(long double));
	printf("%-20s = %d\n","sizeof(const)", sizeof(SUCCESS));
	printf("%-20s = %d\n","sizeof(enum NO)", sizeof(NO));
	printf("%-20s = %d\n","sizeof(enum TRUE)", sizeof(TRUE));	
	return SUCCESS;
}


