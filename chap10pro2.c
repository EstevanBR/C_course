#include <stdio.h>
void copy_arr(double source[], double target[], int rows);
void copy_ptr(double * source, double * target, int rows);
int main(void)
{
	int i = 0;

	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	copy_arr(source, target1, 5);
	copy_ptr(source, target2, 5);
	for(i = 0; i < 5; i++)
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