 /************************************************
    * filename: mod5pro4.c
    * Assignment: Module 5, Programming Assignnment 4
    * Name: Estevan Hernandez
    * Date Created: August, 27, 2014
    *
	* Write a program that uses a 10-element integer
	* array and prompts the user for 10 integer values
	* to populate the array. Pass a pointer of this
	* array to a function called largest() that you
	* create as part of your program. The function
	* largest() then returns the largest value stored
	* in the array. The function main() outputs the
	* largest value contained in the array.
    *************************************************/

#include <stdio.h>
#define BOUNDS 10
int largest(const int * array, const int limit); /* because there is no modification of data described in the program specs, I opted to use const for the array */
int main(void)
{
	int numbers[BOUNDS];
	int i;

	printf("Please enter 10 integer values and I print the highest number\n");

	for(i = 0; i < BOUNDS; i++)
	{
		scanf("%d", &numbers[i]);
	}
	printf("the largest number is %d\n", largest(numbers, BOUNDS));

	return 0;
}

int largest(const int * array, const int limit) /*  */
{
	int i;
	int largest;

	for(i = 0; i < limit; i++) /* this code loops through the array */
	{
		if (array[i] > largest) /* this code assigns the current element into 'largest' as long as the current element is bigger than the current int in 'largest' */
			largest = array[i];
	}

	return largest;
}