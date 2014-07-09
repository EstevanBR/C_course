/* chap6ex5.c */
#include <stdio.h>
#include <string.h>
#define BRACKET printf("-------------------------------------------------\n");
int main(void)
{
	int first, last, inc;

	printf("This program will take 2 numbers,\na starting number and a stopping number,\nand then calculate the square and cubes\nof said numbers\n");
	printf("Please enter the first number:");
	scanf("%d", &first);
	printf("Now please enter the last number:");
	scanf("%d", &last);

	while (last < first)
		{
			printf("The starting number has to be less than the finishing number\n");
			printf("Please enter a number larger than your first number\n");
			scanf("%d", &last);
		}
	BRACKET
	while (first <= last)
		{

			printf("|number: %-7d|squared: %-7d|cubed: %-7d|\n", first, first * first, first * first * first);
			first++;
		}
	BRACKET
	
	return 0;
}
