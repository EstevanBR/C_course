#include <stdio.h>
int main(void)
{
	//
	printf("\nA\n");
	int x = 0;
	while (++x < 3)
		printf("%4d", x);

	//
	printf("\nB\n");
	x = 100;

	while (x++ < 103)
		printf("%4d\n",x);
		printf("%4d\n",x);

	//
	printf("\nC\n");
	char ch = 's';

	while (ch < 'w')
	{
		printf("%c", ch);
		ch++;
	}
	printf("%c\n", ch);

	return 0;
}