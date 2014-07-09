/*#include <stdio.h>
int main(void)
{
	char winner[5] = "Estevan";
	printf("%5.5s\n", "Estevan");
	printf("%6c\n", '\\');
	printf("%10.5s\n", winner);
	printf("%6c\n", '/');
	printf("%5.5s\n", "Ramon");

	return 0;
}*/

#include <stdio.h>
#define HOWMANY 1000
int main(void)
{
	int primes[1000], i = 0;

	while(i <= HOWMANY-1 && getchar() != EOF)
	{
		scanf("%d", &primes[i]);
		printf("%d", primes[i++]);
		if (i % 20 == 0)
			printf("\b\n");
		else
			printf(" ");
	}
	printf("\n");
	return 0;
}