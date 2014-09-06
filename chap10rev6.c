#include <stdio.h>
int main(void)
{
	int grid[30][100];


	//Express the address of grid[22][56] one way.
	printf("\n\n&grid[22][56] == %p\n", &grid[22][56]);

	//Express the address of grid[22][0] two ways.
	printf("\n\n"
		   " grid+22     == %p\n"
		   "&grid[22][0] == %p\n"
		   "\n", grid+22, &grid[22][0]);

	//Express the address of grid[0][0] three ways.
	printf("grid         = %p,\n"
		   "**(grid+0)+0 = %p,\n"
		   "&grid[0][0]  = %p\n", grid, *(grid+0)+0, &grid[0][0]);

	return 0;
}