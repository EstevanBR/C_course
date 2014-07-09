/*
int main(void)
{
	int i = 1,
	float n;
	printf("Watch out! Here come a bunch of fractions\n");
	while (i < 30)
		n = 1/i;
		printf(" %f", n);
	printf("That's all, folks!\n");
	return;
}
*/

#include <stdio.h>//new line
int main(void)
{
	int i = 1;//semi colon
	float n;
	printf("Watch out! Here come a bunch of fractions\n");
	while (i++ < 30)
		{
			n = i/1;
			printf(" %f", n);
		}
	printf("That's all, folks!\n");
	return 0;//return 0
}