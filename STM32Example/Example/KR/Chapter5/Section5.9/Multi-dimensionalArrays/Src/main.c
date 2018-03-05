
#include <stdio.h>
#include <string.h>

int main()
{
	char *name[] = { "Illegal month", "Jan", "Feb", "Mar" };
	char aname[][15] = { "Illegal month", "Jan", "Feb", "Mar" };
	
	/* sizeof(name) is size of 4 char pointers, which is 16 */
	printf("sizeof(name) = %d\n",sizeof(name));
	printf("sizeof(name) is size of 4 char pointers, which is 16\n\n");

	/* sizeof(aname) is size of 4, 15 bytes array, which is 60 */
	printf("sizeof(aname) = %d\n",sizeof(aname));
	printf("sizeof(aname) is size of 4, 15 bytes array, which is 60\n");

	/* sizeof(aname[0]) is size row 0 of aname 2d array, which is 15 bytes */
	printf("sizeof(aname[0]) = %d\n",sizeof(aname[0]));
	printf("sizeof(aname[0]) is size row 0 of aname 2d array, which is 15 bytes\n\n");
	
  printf("closely watch the difference in sizeof() values\n\n");
	
	for(int i =0; i < sizeof(name)/sizeof(char *); i++)
	{
		printf("sizeof(name[%d]) = %d, strlen(name[%d]) = %d\n",i,sizeof(name[i]), i,strlen(name[i]));
	}

	
	
	for(int i =0; i < sizeof(aname)/sizeof(aname[0]); i++)
	{
		printf("sizeof(aname[%d]) = %d, strlen(aname[%d]) = %d\n",i,sizeof(aname[i]), i,strlen(aname[i]));
	}
	return 0;
}
