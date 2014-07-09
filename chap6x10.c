/* chap6x10.c */
#include <stdio.h>
int main(void)
{
	int eight[7];
	int i;
	//scanf("%d %d %d %d %d %d %d %d", eight[0],eight[1],eight[2],eight[3],eight[4],eight[5],eight[6],eight[7]);
	for (i = 0; i <= 7; i++)
		scanf("%d", &eight[i]);
	for (i = 7; i >= 0; i--)
		printf("%d ", eight[i]);
	return 0;
}