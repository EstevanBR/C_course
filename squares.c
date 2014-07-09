/*squares*/
#include <stdio.h>

int main(void)
{
	int num = 1;

	printf("number    square\n----------------\n");

	while (num <21)
	{
		printf("%6d %9d\n", num, num * num);
		num = num+1;
	}

	return 0;
}
