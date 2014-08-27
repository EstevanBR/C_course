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
void sort(int *pt, int limit);
int main(void)
{
	int numbers[BOUNDS];
	int i;

	printf("Please enter 10 integer values and I will sort them.\n");

	for(i = 0; i < BOUNDS; i++)
	{
		scanf("%d", &numbers[i]);
	}
	printf("done taking numbers.\n");
	sort(numbers, BOUNDS);
	return 0;
}
void sort(int *pt, int limit)
{
	int num[10][2];
	int i;
	for (i = 0; i < limit; i++)
	{

	}





}