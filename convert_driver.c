/************************************************
	* filename: convert_driver.c
	* Assignment: Module 6, Programming Assignnment 3
	* Name: Estevan Hernandez
	* Date Created: October 11, 2014
	*
	* Write a program that converts a user entered
	* temperature in Fahrenheit to Celsius
	* incorporating three modules and functions named
	* as identified below.
	* The user entered Fahrenheit temperature is to
	* be passed as an argument to the function named
	* convert() in the module "conversion.c".
	* The calculated Celsius value is to be return by
	* the function and the result displayed to the user
	* in the function main() : 
	* a.	> convert_driver.c - contains the function main() and the user interface <
	* b.	conversion.h - contains the prototype for a function named convert()
	* c.	convertsion.c - contains the function definition for convert()
	* NOTE: YOU NEED TO COMPILE WITH convertsion.c AS WELL AS HAVE conversion.h IN
	* THE SAME LOCAL DIRECTORY AS THIS SOURCE CODE.
	*************************************************/
#include <stdio.h>
#include "conversion.h"
int main(void)
{
	float fahr;
	float cels;
	printf("Enter your tempurature in Fahrenheit:\n");
	scanf("%f", &fahr);
	cels = convert(fahr);
	printf("%f Fahrenheit = %f Celsius\n", fahr, cels);

	return 0;
}