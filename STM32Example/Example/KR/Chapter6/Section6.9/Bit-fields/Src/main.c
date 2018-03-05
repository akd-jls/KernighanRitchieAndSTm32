#include <stdio.h>


#define KEYWORD 01
#define EXTERNAL 02
#define STATIC 04

struct {
	unsigned int is_keyword : 1;
	unsigned int is_extern : 1;
	unsigned int is_static : 1;
} st_flags;

int main(void)
{
	unsigned int flags  = 0;
	
	flags |= EXTERNAL | STATIC;
	
	if ((flags & (EXTERNAL | STATIC)) == 0){
		printf("EXTERNAL and  STATIC are OFF\n");
	}
	else{
		printf("EXTERNAL and  STATIC are ON\n");
		
		printf("turns them OFF\n");
		
		flags &= ~(EXTERNAL | STATIC);
	}
	
	if ((flags & (EXTERNAL | STATIC)) == 0){
		printf("EXTERNAL and  STATIC are OFF\n");
	}
	else{
		printf("EXTERNAL and  STATIC are ON\n");
		flags &= ~(EXTERNAL | STATIC);
	}	


  printf("\n\n A bit-field \n\n");	
	
	st_flags.is_extern = st_flags.is_static = 1;
	
	if (st_flags.is_extern == 0 && st_flags.is_static == 0){
		printf("EXTERNAL and  STATIC are OFF\n");
	}
	else{
		printf("EXTERNAL and  STATIC are ON\n");
		
		printf("turns them OFF\n");
		st_flags.is_extern = st_flags.is_static = 0;
	}
	
	if (st_flags.is_extern == 0 && st_flags.is_static == 0){
		printf("EXTERNAL and  STATIC are OFF\n");
	}
	else{
		printf("EXTERNAL and  STATIC are ON\n");
		
		printf("turns them OFF\n");
		st_flags.is_extern = st_flags.is_static = 0;
	}
}
