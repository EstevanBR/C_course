 /************************************************
    * filename: mod5pro3.c
    * Assignment: Module 5, Programming Assignnment 3
    * Name: Estevan Hernandez
    * Date Created: August, 26, 2014
    *
	* Write a program that uses a 10-element integer
	* array and prompts the user for 10 integer values
	* to populate the array. Pass a pointer of this
	* array to a function called sort() that sorts
	* the numbers from smallest to largest and outputs
	* the sorted numbers to the user.
    *************************************************/

#include <stdio.h>
#define BOUNDS 10
void sort(int * array, int limit);
int main(void)
{
	int numbers[BOUNDS];
	int i;

	printf("Please enter 10 integer values and I will sort them.\n");

	for(i = 0; i < BOUNDS; i++)
	{
		scanf("%d", &numbers[i]);
	}
	/* printf("done taking numbers.\n"); */
	sort(numbers, BOUNDS);
	for(i = 0; i < BOUNDS; i++)
	{
		printf("%d ", numbers[i]);
	}
	return 0;
}

void sort(int * array, int limit) /* this is a recursive function I created. */
{
	int i;
	int swap;

	for(i = 0; i < limit; i++) /* goes through array */
	{
		if (array[i] <= array[0]) /* if a larger number is found;*/
		{
			swap = array[i]; /* saves the larger element into swap */
			array[i] = *array; /* saves [0] into [i] */
			*array = swap; /* saves the larger element into [0] */
			/* the above 2 lines of code serve to swap 2 elements. the larger with whatever is at index 0 */
		}
		printf("the lowest number so far is %d and i = %d\n", array[0], i);
	}

	if (limit > 2) /* there would be no point in swapping elements when there are less than 2 left.*/
		sort(&array[1], limit - 1); /* this calls the function again, but this time it sort of 'tricks' the function into thinking [1] is the new 0 */
	/* limit is decremented to compensate, otherwise the array would try to go out of bounds and it would be messy */
}