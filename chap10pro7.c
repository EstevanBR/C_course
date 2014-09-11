/* 7. Use a copy function from exercise 2 to copy the third through fifth elements
of a seven-element array into a three-element array. The function itself need not
be altered; just choose the right actual arguments. (The actual arguments need not
be an array name and array size. They only have to be the address of an array
element and a number of elements to be processed.) */

#include <stdio.h>
void copy_arr(double source[], double target[], int rows);
void copy_ptr(double * source, double * target, int rows);
int main(void)
{
	int i = 0;

	double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double target1[3];
	double target2[3];
	copy_arr(source+2, target1, 3);
	copy_ptr(source+2, target2, 3);
	for(i = 0; i < 3; i++)
		printf(" source[%d] = %e\n"
			   "target1[%d] = %e\n"
			   "target2[%d] = %e\n\n", i, source[i], i, target1[i], i , target2[i]);

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