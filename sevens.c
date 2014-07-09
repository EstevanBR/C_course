/*sevens.c*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	int num = 0;
	int base;
	int i;

	printf("I will print the first 100 multiples of a number, but what number? __\b\b");
	scanf("%d", &base);
	printf("Your number is %d\n-------------------------------------------------------\n", base);

	while (num <= base * 100)
	{
		for(i = 1; i <= 10; i++)
		{
		printf("%5d", num);
		num = num + base;
		}
		printf("%5d\n", num);
		
	}
	printf("-------------------------------------------------------\n");

	return 0;
}