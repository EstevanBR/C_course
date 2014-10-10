#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i;
	char * ptd;
	ptd = malloc(30 * sizeof(double));
	for(i = 0; i<30; i++)
	{
		ptd[i] = time(NULL);
		printf("%c\n", ptd[i]);
	}
	int n = 5;
	int m = 6;
	int ar2[n][m];     // n x m VLA
	int (* p2)[6];     // works pre-C99
	int (* p3)[m];     // requires VLA support
	p2 = (int (*)[6]) malloc(n * 6 * sizeof(int));  // n * 6 array
	p3 = (int (*)[m]) malloc(n * m * sizeof(int));  // n * m array
	// above expression also requires VLA support

	ar2[1][2] = p2[1][2] = 12;

	return 0;
}