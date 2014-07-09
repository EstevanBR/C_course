#include <stdio.h>
int main(void)
{
	float n;

	printf("please enter a number with a fractional part (eg: 12.34): ");
	scanf("%f", &n);
	printf("the number you entered when cubed (n^3) is: %.2f\n", n * n * n);

	return 0;
}