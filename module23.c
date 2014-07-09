/************************************************
* filename: module23.c
* Exercise: Module 2, Programming Assignment 3
* Name: Estevan Hernandez
* Date Created: May 16, 2014
*
* Description: Requests time in seconds and converts
* to hours and minutes and then displays information to the user.
*************************************************/
#include <stdio.h>
const int SEC_PER_HOU = 3600;
const int SEC_PER_MIN = 60;
int main(void)
{
	int seconds, hours;
	float minutes;

	printf("Hello, please tell me how many seconds you would like me to convert for you:\n[enter 0 to exit]: _____\b\b\b\b\b");
	scanf("%d", &seconds);
	
	while(seconds > 0)
	{
		hours = seconds / SEC_PER_HOU;
		minutes = ((float) seconds - (float) hours * (float) SEC_PER_HOU) / (float) SEC_PER_MIN;

		printf("\n%d seconds is %d hours and %.2f minutes.\n\n", seconds, hours, minutes);
		printf("Would you like to repeat the process with a different number?\n");
			printf("Please tell me how many seconds you would like me to convert for you\n[enter 0 to exit]: _____\b\b\b\b\b");
		scanf("%d", &seconds);
	}

	printf("Goodbye!\n");

	return 0;

}