/*
Write a program that declares a 3x5 array and initializes it to some values of your choice.
Have the program print the values, double all the values, and then display the new values.
Write a function to do the displaying and a second function to do the doubling.
Have the functions take the array name and the number of rows as arguments.
*/

#include <stdio.h>
void process(int rows, int cols, int source[rows][cols]);
void display(int rows, int cols, int source[rows][cols]);
int main(void)
{
	const int rows = 3, cols = 5;
	int array1[rows][cols] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

	display(rows, cols, array1);
	process(rows, cols, array1);
	printf("new values:\n");
	display(rows, cols, array1);

	return 0;
}

void process(int rows, int cols, int source[rows][cols])
{
	int r;
	int c;

	for(r = 0; r < rows; r++)
	{
		for(c = 0; c < cols; c++)
		{
			source[r][c] = (source[r][c]) * 2;
			//printf("int at:\n\t%p, or, array1[%d][%d] is %d\n", &source[r][c], r,c,source[r][c]);
		}
	}
}
void display(int rows, int cols, int source[rows][cols])
{
	int r;
	int c;

	for(r = 0; r < rows; r++)
	{
		for(c = 0; c < cols; c++)
		{
			printf("array1[%d][%d] = %d\n", r,c,source[r][c]);
		}
	}
}