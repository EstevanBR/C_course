/* Write a program that initializes a two-dimensional 3x5 array-of-double
and uses a VLA-based function to copy it to a second two-dimensional array.
Also provide a VLA-based function to display the contents of the two arrays.
The two functions should be capable, in general, of processing arbitrary NxM
arrays. (If you don't have access to a VLA-capable compiler, use the traditional
C approach of functions that can process an Nx5 array).
*/

#include <stdio.h>
void process(int rows, int cols, double source[rows][cols], double target[rows][cols]);
void display(int rows, int cols, double source[rows][cols], double target[rows][cols]);
int main(void)
{
	const int rows = 3, cols = 2;
	double array1[rows][cols] = {1.1,2.2,3.3,4.4,5.5,6.6};
	double array2[rows][cols];

	process(rows, cols, array1, array2);
	display(rows, cols, array1, array2);

	return 0;
}

void process(int rows, int cols, double source[rows][cols], double target[rows][cols])
{
	int r;
	int c;

	for(r = 0; r < rows; r++)
	{
		for(c = 0; c < cols; c++)
		{
			target[r][c] = source[r][c];
			printf("double at:\n\t%p, or, array1[%d][%d]\n\thas been copied to:\n\t%p, or, array2[%d][%d]\n", &source[r][c], r,c,&target[r][c],r,c);
		}
	}
}
void display(int rows, int cols, double source[rows][cols], double target[rows][cols])
{
	int r;
	int c;

	for(r = 0; r < rows; r++)
	{
		for(c = 0; c < cols; c++)
		{
			printf("array1[%d][%d] = %e\n", r,c,source[r][c]);
			printf("array2[%d][%d] = %e\n", r,c,target[r][c]);
		}
	}
}