/************************************************
    * filename: mod5pro1.c
    * Assignment: Module 5, Programming Assignnment 1
    * Name: Estevan Hernandez
    * Date Created: August, 26, 2014
    *
    * Write a program that creates an array
    * containing all even numbers from 1 to 100 in
    * ascending order. Display the 5 largest even
    * numbers from the array in descending order.
    * The output should look as follows:
    *************************************************/

#include <stdio.h>
#define TOP 5            /* top n numbers to print */
int main(void)
{
	int even[100];
	int i;
	int j;

	for (i = 0, j = 0; i <= 100; i++)
	{
		if (i % 2 == 0)  /* if number is even */
		{
			even[j] = i; /* add an array element */
			j++;		 /* increment array index */
		}
	}

	i = j - TOP;         /* creates a lower limit for the next loop which prints the top n even numbers */
	printf("\nTop 5 even numbers are: ");

	while(j-- > i)		 /* if j has not reached the lower limit established by i = j - TOP */
		printf("%d ", even[j]);

	printf("\n\n");

	return 0;
}

