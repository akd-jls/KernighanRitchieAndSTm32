
#include <stdio.h>  

void print(float f);

char c = 'c';
	
int main(void)      		
{
  /* Using the ARM compiler, you can declare any number of local objects to have the storage class register. */
	char c = 'a';

	float speed = 6.7; 
	
	{
	
		float speed = 1.7; 
		printf("%-25s: %f %c\n","inside block", speed, c);	
	}

	printf("%-25s: %f %c\n","outside block", speed, c);	
	
	print(speed);
	
	return 0;													
}

void print(float f)
{
	printf("%-25s: %f %c\n","inside another function", f, c);	

}


