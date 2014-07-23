/************************************************
    * filename: mod4pro4.c
    * Assignment: Module 4, Programming Assignnment 4
    * Name: Estevan Hernandez
    * Date Created: July 23, 2014
    *
    * Write a program that prompts the user to enter
    * in two "long" values. Implements a function
    * called negative_count() that takes two arguments
    * of data type "long" and returns an integer that
    * is the number of arguments that were negative.
    * The function main() then displays the result. For example:
    *
	* Enter two integers of data type "long": -1264364007 -2012334695
	* Number of negative number entered 2
    *************************************************/
#include <stdio.h>
int negative_count(long num, long num2);
int main(void)
{
	long first, second;
	int count;

	printf("\nPlease enter 2 long integers: ");
	scanf("%lu %lu", &first, &second);
	count = negative_count(first, second);
	printf("Negative numbers = %d\n\n", count);
	
	return 0;
}

int negative_count(long num, long num2)
{
	int i = 0;
	i = ((num < 0) + (num2 < 0));
	return i;
}