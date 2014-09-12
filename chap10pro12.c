/*
Write a program that prompts the user to enter three sets of five double numbers each. The program should accomplish all of the following:

Store the information in a 3x5 array.

Compute the average of each set of five values.

Compute the average of all the values.

Determine the largest value of the 15 values.

Report the results.
*/

#include <stdio.h>
void get_double(int rows, int cols, double array[rows][cols]);
void avg_sub(int rows, double array[rows]);
double avg_all(int rows, int cols, double array[rows][cols]);
double largest(int rows, int cols, double array[rows][cols]);
int main(void)
{
	int i;
	const int rows = 3, cols = 5;
	double average_all;
	double largest;

	double array[rows][cols];
	get_double(rows,cols,array);

	for(i = 0; i < rows; i++)
	{
		avg_sub(5, &array[i][0]);
	}

	average_all = avg_all(rows,cols,array);
	printf("average of all numbers is %le\n", average_all);


	return 0;
}

void get_double(int rows, int cols, double array[rows][cols])
{
	int r, c;
	printf("Please enter 15 doubles:\n");
	for(r = 0; r < rows; r++)
	{
		for(c = 0; c < cols; c++)
		{
			scanf("%le", &array[r][c]);
			printf("%le\n", array[r][c]);
		}
	}
}
void avg_sub(int rows, double array[rows])
{
	int r;
	double average = 0;
	for(r = 0; r < rows; r++)
	{
		average += array[r];
	}
	average = average/r;
	printf("average = %le\n", average);
}
double avg_all(int rows, int cols, double array[rows][cols])
{
	double average = 0;
	int r, c;
	for(r = 0; r< rows; r++)
	{
		for(c = 0; c< cols; c++)
		{
			average += array[r][c];
		}
	}
	average = average/(c * r);
	return average;
}
double largest(int rows, int cols, double array[rows][cols])
{
	double largest;
	return largest;
}













