
#include <stdio.h>

static char daytab[2][13] = {
  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
  {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
/* day_of_year: set day of year from month & day */
int day_of_year(int year, int month, int day)
{
  int i, leap;
  leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
  for (i = 1; i < month; i++)
    day += daytab[leap][i];
  return day;
}
/* month_day: set month, day from day of year */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
  int i, leap;
  leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
  for (i = 1; yearday > daytab[leap][i]; i++)
    yearday -= daytab[leap][i];
  *pmonth = i;
  *pday = yearday;
}

/* sort input lines */
int main()
{
	int year = 0, month = 0, day = 0;
	printf("Enter year month day (Ex. 1992 5 27):");
	scanf("%d %d %d", &year, &month, &day);
	printf(" %dth day of year %d\n", day_of_year(year, month, day), year);

	printf("Enter year day (Ex. 1992 148):");
	scanf("%d %d", &year, &day);
	month_day(year, day, &month, &day);
	printf(" %dth day of %d month", day, month);

}
