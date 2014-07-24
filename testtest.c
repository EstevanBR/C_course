#include <stdio.h>
int main(void)
{
	int i, num = 1, num2 = 3, num3 =4, num4 = 5, num5 = 5;

	i = ((num == 5) + (num2 == 5) + (num3 == 5) + (num4 == 5) + (num5 == 5));
	printf("There are 5 numbers %d, %d, %d, %d, and %d\n", num, num2, num3, num4, num5);
	printf("of the 5 numbers listed, %d of them are equal to 5\n", i);

	return 0;
}
//i basically ends up being the amount of numbers that are equal to 5.