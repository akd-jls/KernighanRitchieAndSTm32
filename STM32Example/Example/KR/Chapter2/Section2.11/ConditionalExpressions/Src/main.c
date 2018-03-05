
#include <stdio.h>

/*
A newline is printed after every tenth element, and after the n-th. All other elements are
followed by one blank.
*/
int main ()
{
	int i;
	int a[32] = {0,111111,222222,3};
	int n = sizeof(a)/sizeof(int);
	
	for (i = 0; i < n; i++){
		printf("%6d%c", a[i], (i%10==9 || i==n-1) ? '\n' : ' ');
	}

	for (i = 0; i < n; i++){
		printf("You have %2d item%s.\n", i, i==1 ? "" : "s");
	}	
	return 0;

}
