
#include <stdio.h>

/* leap year */
void leapyear(int year);

int main ()
{
	int year = 0;
	
	printf("Enter year: ");
	scanf("%d",&year);
	printf("\n");
	
	leapyear(year);

}
void leapyear(int year)
{
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    printf("%d is a leap year\n", year);
  else
    printf("%d is not a leap year\n", year);
}

