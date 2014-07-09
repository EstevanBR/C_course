/* chap6x12.c */
#include <stdio.h>
#include <math.h>
int main(void)
{
	int powers[8], i;
	for (i = 1; i <= 8; i++)
		powers[i] = pow(2, i);
	i = 1;
	do{
		printf("%3d\n", powers[i++]);
	}while(i <= 8);
	return 0;

}