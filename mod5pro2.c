 /************************************************
    * filename: mod5pro2.c
    * Assignment: Module 5, Programming Assignnment 2
    * Name: Estevan Hernandez
    * Date Created: August, 26, 2014
    *
	* Write a program that implements a two dimensional array. Prompt the user to input 5 integer values and then
	* calculate and store the squared values for each user input in the array. Output the results to the user.

	* Value   Squared
	* 5       25
	* 8       64
	* 2       4
	* 10      100
	* 1       1
    *************************************************/

#include <stdio.h>
int main(void)
{
	int nums[5][2]; /* 2 dimensional array, 5 rows, 2 columns */
	int i;

	printf("Please enter 5 integers and I will square them and print the results:\n");
	for(i = 0; i < 5; i++) /* loops through array, storing user inputted integers*/
	{
		scanf("%d", &nums[i][0]);
	}

	printf(" ______________ ______________ \n|    %-8s  |    %-8s  |\n","Value", "Squared"); /* for spacing purposes, it has to look nice! */

	for(i = 0; i < 5; i++) /* loops through array, calculating squares */
	{
		(nums[i][1]) = (nums[i][0]) * (nums[i][0]); /* calculates squares */
	}

	for(i = 0; i < 5; i++)
	{
		printf("|--------------|--------------|\n|      %-8d|      %-8d|\n", nums[i][0], nums[i][1]); /* prints contents of the array */
	}
	printf("|______________|______________|\n\n");
	printf("Done\n");
	return 0;

}