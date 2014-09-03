#include <stdio.h>
int main(void)
{
	int ii = 0, ij = 0;
	int *pi = &ii, *pj = &ij;

	printf("pi - pj = %ld\n", pi - pj);

	return 0;
	
}