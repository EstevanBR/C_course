/************************************************
    * filename: addition.c
    * Assignment: Module 6, Programming Assignnment 4
    * Name: Estevan Hernandez
    * Date Created: October 11, 2014
    *
    * Write a calculator program that adds and subtracts. Prompt the user to enter two values and select an operation to perform.
	* Incorporate a program with five modules and functions named as follows:
	* a.	calc_driver.c - contains the function main() and the user interface
	* b.	addition.h - contains the prototype for a function named add()
	* c.	> addition.c - contains the function definition for add() <
	* d.	subtraction.h - contains the prototype for a function named subtract()
	* e.	subtraction.c - contains the function definition for subtract()
	* NOTE:
	* calc_driver.c, addition.c, and subtraction.c need to be compiled together.
	* addition.h and subtraction.h both need to be in the same local directory
	* as the source code files.
	*************************************************/

float add(const float num1, const float num2)
{
	return num1 + num2;
}