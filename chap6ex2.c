/* chap6ex2.c */
#include <stdio.h>
int main(void)
{
	int maxchr, maxrow, chr, row;
	char money = '$';

	chr = 0;
	maxrow = 0;
	maxchr = 1;

	while (maxrow < 5)
	{
		do{
			printf("%c", money);
			chr++;
		}while (chr < maxchr);
		maxchr++;
		maxrow++;
		chr = 0;
		if (maxrow<5)
			printf("\n");
	}
	printf("\n");
}