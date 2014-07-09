#include <stdio.h>
int main(void)
{
	/*int q, r, z = 3, x = 3;
	q = 2*++x; // x is incremented, making it 4, and then the operation "2 * 4" is performed and assigned to q
	r = 2*z++; // "2 * 3" is performed and then assigned to r, then z is incremented aftwerwards making it 4.

	printf("\nq = %d, r = %d\n\nz = %d and x = %d\n\n", q, r, z, x);
	r = 2 * z;
	printf("r = %d\n", r);*/

	int n = 2, x = 3;

	printf("n = 2, x = 3,     n++ * x = 2 * 3 = %d\n", n++ * x);
	n = 2;
	x = 3;
	printf("n = 2, x = 3,     ++n * x = 3 * 3 = %d\n", ++n * x);


	return 0;
}