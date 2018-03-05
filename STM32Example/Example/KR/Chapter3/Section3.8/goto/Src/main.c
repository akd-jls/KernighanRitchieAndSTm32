

#include <stdio.h>

int main ()
{
	int i, j,n,m;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int b[10] = {11,12,13,14,15,5,17,18,19,110};
	
	n = sizeof(a)/sizeof(int);
	m = sizeof(b)/sizeof(int);
	

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (a[i] == b[j])
				goto found;

	printf("no match found\n");
	return 0;
				
/* didn't find any common element */
found:
/* got one: a[i] == b[j] */
	printf("found a[%d] and b[%d] have same value %d", i, j, a[i]);
	return 0;

}
