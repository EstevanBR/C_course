#include <stdio.h>
int largest(int rows, int array[rows]);
int main(void)
{
	int array[22]={1,5,4,6,7,88,3456,7775,4,3,7,88,42,999994,54,3,22234,5,4,4444,223,5};
	int biggest;

	biggest = largest(22, array);

	printf("\nthe element with the biggest int in array[] is array[%d]\n\n", biggest);

	return 0;

}

int largest(int rows, int array[rows])
{
	int big = 0;
	int bigi = 0;
	int r = 0;
	for(r = 0; r<rows; r++)
	{
		if (array[r] > big)
			{
				big = array[r];
				bigi = r;
			}
	}
	return bigi;
}