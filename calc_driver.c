/************************************************
    * filename: calc_driver.c
    * Assignment: Module 6, Programming Assignnment 4
    * Name: Estevan Hernandez
    * Date Created: October 11, 2014
    *
    * Write a calculator program that adds and subtracts. Prompt the user to enter two values and select an operation to perform.
	* Incorporate a program with five modules and functions named as follows:
	* a.	> calc_driver.c - contains the function main() and the user interface <
	* b.	addition.h - contains the prototype for a function named add()
	* c.	addition.c - contains the function definition for add()
	* d.	subtraction.h - contains the prototype for a function named subtract()
	* e.	subtraction.c - contains the function definition for subtract()
	* NOTE:
	* calc_driver.c, addition.c, and subtraction.c need to be compiled together.
	* addition.h and subtraction.h both need to be in the same local directory
	* as the source code files.
	*************************************************/
#include <stdio.h>
#include <ctype.h>
#include "addition.h"
#include "subtraction.h"
int main(void)
{
	float first;
	float second;
	float result;
	char choice;

	printf("This program performs an operation of\naddition or subtraction on 2 numbers that you will provide.\nPlease enter the first number\n");

	scanf("%f", &first);

	printf("...Now please enter the second number.\n");

	scanf("%f", &second);

	while(getchar() != '\n') /* clear newline from buffer */
		continue;

	printf("\nNow please enter the letter corresponding to the operation you would like to perform:\n");
	printf("\ta: add %.2f to %.2f\n", first, second);
	printf("\tb: subtract %.2f from %.2f\n", second, first);
	printf("Your choice: _\b");

	scanf("%c", &choice);

	while(choice != 'a' && choice != 'b') /* input verification, making sure that choice == a or b before moving to next segment of code*/
	{
		printf("\007Oops! please enter a, or b\ntry again:"); /* warning message and fancy beep */
		scanf("%c", &choice);
		while(getchar() != '\n') /* clear newline from buffer */
			continue;
	}

	switch(choice){
		case 'a': result = add(first, second);
		printf("\n%.2f + %.2f = %.2f\n", first, second, result);
		break;
		case 'b': result = subtract(first, second);
		printf("\n%.2f - %.2f = %.2f\n", first, second, result);
		break;
		}

	printf("\nDone.\n");

	return 0;
}