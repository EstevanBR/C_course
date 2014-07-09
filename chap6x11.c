/* chap6x11.c */
#include <stdio.h>
int main(void)
{
	int i = 1, max;
	float sum = 0.0;
	printf("please enter # of iterations\n");
	scanf("%d", &max);

	while (i++ < max)
		sum += 1.0 / (float) i;
	printf("1.0 + 1.0/2.0 + 1.0/3.0 ... to %d terms is: %f\n", max, sum);

	i = 1;
	sum = 0.0;

	while (i++ < max)
		sum -= 1.0 / (float) i;
	printf("1.0 - 1.0/2.0 - 1.0/3.0 ... to %d terms is: %f\n", max, sum);

	return 0;

}