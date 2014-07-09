#include <stdio.h>
int main(void)
{
	int i1, i2;

	for (i1 = 0; i1 <= 3; i1++)
	{
		for (i2 = 0; i2 <= 7; i2++)
			printf("$");
		printf("\n");
	}
	return 0;
}