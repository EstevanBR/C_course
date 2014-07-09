/************************************************
* filename: module22.c
* Exercise: Module 2, Programming Assignment 2
* Name: Estevan Hernandez
* Date Created: May 15, 2014
*
* Description: Requests a trip distance in miles,
* a speed in miles/hour, and your name, and then
* displays the information
*************************************************/
#include <stdio.h>
#include <string.h> /* important for strings :P*/
int main(void)
{
	float distance, duration, speed; /*set up floating point variables incase they enter data with fractional parts*/
	char firstname[40];

	printf("Hello, would you please type how far you plan to travel on this trip? (miles)\n");
	scanf("%f", &distance);
	printf("...and could you please tell me how fast you plan to be going? (miles per hour)\n");
	scanf("%f", &speed);
	printf("...and what is your first name?\n");
	scanf("%s", firstname);
	printf("Thank you\n");

	duration = distance / speed; /*math is fun*/

	printf("%s, your trip of %.0f miles at %.0f mph will take %.1f hours\n", firstname, distance, speed, duration);

	return 0;


}