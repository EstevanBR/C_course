#include <stdio.h>
int main(void)
{
	int n = 0;
	int count;

	for (count = 0; count < 100; count++)
	{
		n = (n + 7) % 8;
		printf("%d\n", n);
	}


	return 0;
}