/* seconds1.c -- converts time in minutes to time in minutes and seconds*/
#include <stdio.h>
#define U_PER_U 60 //60 seconds per minute, 60 minutes per hour
int main(void)
{
	int minutes;
	int hours;

	printf("hello, please enter how many minutes to be converted to hours and minutes [or enter 0 to quit program]\nhow many minutes?:");
	scanf("%d", &minutes);
	while (minutes > 0)
	{
		hours = minutes / U_PER_U;
		minutes = minutes % U_PER_U;
		printf("%d hours and %d minutes\n", hours, minutes);
		printf("again,\nhow many minutes?:           [0 to quit]\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bg\b\b\b\b\b\b");
		scanf("%d", &minutes);
	}
	printf("Thanks!\n");

	return 0;
}