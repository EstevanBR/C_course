 /************************************************
    * filename: mod5pro5.c
    * Assignment: Module 5, Programming Assignnment 5
    * Name: Estevan Hernandez
    * Date Created: August, 27, 2014
    *
	* Write a program that prompts the user for a
	* character string. Pass this string to a function
	* called reverse() that you create as part of your
	* program. The function reverse() then reverses
	* the order of all of the characters in the
	* string. The function main() then prints out the
	* reversed string array.
    *************************************************/

#include <stdio.h>
#include <string.h>
#define BOUNDS 10
int largest(int * array, int limit);
int main(void)
{
	int numbers[BOUNDS];
	int i;

	printf("Please enter a string and I print the highest number\n");

	for(i = 0; i < BOUNDS; i++)
	{
		scanf("%c", &numbers[i]);
	}

	printf("the largest number is %d\n", largest(numbers, BOUNDS));

	return 0;
}
int largest(int * array, int limit)
{
	int i;
	int largest;

	for(i = 0; i < limit; i++)
	{
		if (array[i] >= array[0])
		{
			largest = array[i];
			array[i] = *array;
			*array = largest;
		}
	}

	return largest;
}