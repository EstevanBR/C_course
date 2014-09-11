/*
Write a program that initializes a two-dimensional array-of-double
and uses one of the copy functions from exercise 2 to copy it to
a second two-dimensional array. (Because a two-dimensional array
is an array of arrays, a one-dimensional copy function can be
used with each subarray.)
*/
#include <stdio.h>
void copy_arr(double source[], double target[], int rows);
void copy_ptr(double * source, double * target, int rows);
int main(void)
{
	int i = 0;

	double source[2][5] = {
		{1.1, 2.2, 3.3, 4.4, 5.5},
		{1.5, 2.4, 3.0, 4.23, 5.1}
	};
	double target1[2][5];
	double target2[2][5];
	copy_arr(*source, *target1, 10);
	copy_ptr(*source, *target2, 10);
	for(i = 0; i < 10; i++)
		printf("x  source[][%d] = %e\n"
			   "x target1[][%d] = %e\n"
			   "x target2[][%d] = %e\n\n", i, source[0][i], i, target1[0][i], i , target2[0][i]);

	/*
	copy_arr(*(source+1), *(target1+1), 5);
	copy_ptr(*(source+1), *(target2+1), 5);
	for(i = 0; i < 5; i++)
		printf(" source[1][%d] = %e\n"
			   "target1[1][%d] = %e\n"
			   "target2[1][%d] = %e\n\n", i, source[1][i], i, target1[1][i], i , target2[1][i]);
	*/
}

void copy_arr(double source[], double target[], int rows)
{
	int r;
	for(r = 0; r<rows;r++)
		target[r] = source[r];
}

void copy_ptr(double * source, double * target, int rows)
{
	int r;
	for(r = 0; r<rows;r++)
		*(target+r) = *(source+r);
}