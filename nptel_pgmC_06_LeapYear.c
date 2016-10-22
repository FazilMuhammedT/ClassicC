#include <stdio.h>

/* Logic of leap years */

/* A normal year has 365 days. Leap Year has 366 days (extra day is 29th of february)
Why? 1 year = 365.242375 rotations of Earth.

365.25 -> Every 4 years you lose ~ 1 day.
So 1 day every 4 years.

In 100 years, you would add 25days.
Every 100 years, skip adding the extra day.

Every 400 years, add 1 day
*/

int main (){

	int year;
	
	printf("Enter the year to check ");
	scanf("%d",&year);

	if(year % 4 == 0 && (!(year % 100 == 0) || year % 400 == 0))
		printf("\nIts a leap year\n");

	return 0;
}
