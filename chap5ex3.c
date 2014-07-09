/*days2wee.c -- chapter 5 exerices #3*/
#include <stdio.h>
#define D_PER_W 7 //7 days in a week
int main(void)
{
	int days;
	int weeks;

	printf("hello, please enter how many days to be converted to weeks and days [or enter 0 to quit program]\nhow many days?:");
	scanf("%d", &days);
	while (days > 0)
	{
		weeks = days / D_PER_W;
		printf("%d days is ", days);
		days = days % D_PER_W;
		printf("%4d weeks and %4d days\n", weeks, days);
		printf("again,\nhow many days?:           [0 to quit]\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
		scanf("%d", &days);
	}
	printf("Thanks!\n");

	return 0;
}