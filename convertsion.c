/************************************************
	* filename: convertsion.c
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
	* a.	convert_driver.c - contains the function main() and the user interface
	* b.	conversion.h - contains the prototype for a function named convert()
	* c.	> convertsion.c - contains the function definition for convert() <
	* NOTE: THIS FILE conversion.h NEEDS TO BE IN THE SAME LOCAL DIRECTORY AS THE SOURCE CODE.
	* THIS NEEDS TO BE COMPILED ALONGSIDE convert_driver.c
	*************************************************/

//convertsion.c - contains the function definition for convert()
float convert(const float fahr) //extern because this function is in 
{
	float cels;
	cels = (fahr-32) * (5.0/9.0);
	return cels;
}