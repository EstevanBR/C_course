#include <stdio.h>
int main(void)
{
	int count, sum, stop;

	count = 0;
	sum = 0;

	printf("how hi should I go?\n");
	scanf("%d", &stop);
	while (count++ < stop)
		sum = sum + count;
	printf("sum = $%.2f\n", (float) sum);

	return 0;
}