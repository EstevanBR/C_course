/*trouble.c -- sums integers entered interactively **BROKEN LOOP** */
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	status = scanf("%ld", &num);
	while (status = 1)
	{
		sum = sum + num;
		printf("\nPlease enter the next integer (q to quit): ");
		status = scanf("%ld", &num);
	}
	printf("Those integers sum to %ld.\n", sum);

	return 0;
}