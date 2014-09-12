/*
takes elements from 2 2d arrays and adds their sums to a 2d array
ex.
array[1][1] = 4
array2[1][1] = 3
arra3[1][1] = 7
*/

#include <stdio.h>
void process(int rows, int cols, int source1[rows][cols], int source2[rows][cols], int target[rows][cols]);
void display(int rows, int cols, int source1[rows][cols], int source2[rows][cols], int target[rows][cols]);
int main(void)
{
	const int rows = 3, cols = 2;
	int array1[rows][cols] = {1,2,3,4,5,6};
	int array2[rows][cols] = {2,4,6,8,19,2};
	int array3[rows][cols];

	process(rows, cols, array1, array2, array3);
	display(rows, cols, array1, array2, array3);

	return 0;
}

void process(int rows, int cols, int source1[rows][cols], int source2[rows][cols], int target[rows][cols])
{
	int r;
	int c;

	for(r = 0; r < rows; r++)
	{
		for(c = 0; c < cols; c++)
		{
			target[r][c] = source1[r][c] + source2[r][c];
			printf("int at:\n\t%p, or, array1[%d][%d]\n\thas been copied to:\n\t%p, or, array2[%d][%d]\n", &source1[r][c], r,c,&source2[r][c],r,c);
		}
	}
}
void display(int rows, int cols, int source1[rows][cols], int source2[rows][cols], int target[rows][cols])
{
	int r;
	int c;

	for(r = 0; r < rows; r++)
	{
		for(c = 0; c < cols; c++)
		{
			printf("array1[%d][%d] = %d\n", r,c,source1[r][c]);
			printf("array2[%d][%d] = %d\n", r,c,source2[r][c]);
			printf("array3[%d][%d] = %d + %d or %d\n\n", r,c,source1[r][c],source2[r][c],target[r][c]);
		}
	}
}