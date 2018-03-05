
#include <stdio.h>

/*
Though n is negative here, you will never get the printf statement as the else is not 
associated to 1st if.
*/

int main()
{
	int n = -1;
	int s[5] = {1,0};
	int i;
	
	if (n > 0)
		for (i = 0; i < n; i++)
		if (s[i] > 0) {
			printf("...");
			return i;
		}
	else /* WRONG */
		printf("error -- n is negative\n");
}
