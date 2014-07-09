/* chap6ex3.c */
#include <stdio.h>
int main(void)
{
	int maxchr, maxrow, chr, row, maxrows;
	char alpha = 'F';

	chr = 0;
	maxrow = 0;
	maxchr = 1;
	maxrows = 6;

	while (maxrow < maxrows)
	{
		do{
			printf("%c", alpha--);
			chr++;
		}while (chr < maxchr);
		maxchr++;
		maxrow++;
		alpha = 'F';
		chr = 0;
		if (maxrow<maxrows)
			printf("\n");
	}
	printf("\n");
}