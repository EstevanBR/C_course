/*sweetie2.c -- a counting loop using for*/
#include <stdio.h>
int main(void)
{
	const int NUMBER = 22;
	int count;

	for (count = 1; count <= NUMBER; count++)
		printf("%d Be my valentine!\n", count); 

	return 0;
}