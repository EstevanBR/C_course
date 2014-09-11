#include <stdio.h>
int range(int rows, int array[rows]);
int main(void)
{
	int array[22]={121,5,4,6,7,88,3456,7775,4,3,7,88,42,999994,54,3,22234,5,4,4444,223,5};
	int difference;

	difference = range(22, array);

	printf("\nthe range between the difference and smallest ints in the array is %d\n\n", difference);

	return 0;

}

int range(int rows, int array[rows])
{
	int big = 0;
	int diff = 0;
	int small = array[0];
	int r = 0;
	for(r = 0; r<rows; r++)
	{
		if (array[r] > big)
			big = array[r];
		if (array[r] < small)
			small = array[r];
	}
	printf("big = %d small = %d\n", big, small);
	return big-small;
}