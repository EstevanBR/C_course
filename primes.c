//primes.c
#include <stdio.h>
int main(void)
{
	float limit; //how many primes to find
	int i;
	int j;

	for (i = 0; i <= limit; i++)
	{
		for (j = i/i; j > 0 ; j--)
		{
			if ((i / j) == ((int) i/(int) j))
				break;

		}
	}
}