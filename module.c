#include <stdio.h>
int main(void)
{
	int ii = 0, ij = 0;
	int *pi = &ii, *pj = &ij;

	printf("pi - pj = %ld\n", pi - pj);

	//VLA testing
	int vlab = 7;
	char pop[7] = "sprite";
	char soda[vlab];

	printf("%s\n", pop);

	int spag[5] = {1,2,3,4,5};
	printf("%d\n", *spag+6);
	printf("%d\n", spag[6]);


	return 0;
	
}