/*chap7x9.c

Write a program that accepts an integer as input and then displays all the prime numbers smaller than or equal to that number.
*/

#include <stdio.h>
int main(void)
{
	int num;
	printf("enter a number and I'll print every number below and including it.\n");
	scanf("%d", &num);
	while (num > 0)
		printf("%d ", num--);
	return 0;
}