/*chap6ex7.c*/
#include <stdio.h>
#include <math.h>
int main(void)
{
	float one, two;

	
		printf("please enter two numbers with a fractional part:\n");
		scanf("%f %f", &one, &two);
	do{
		printf("(%.4f - %.4f) / (%.4f %.4f) = %.4f\n", one, two, one, two, (one - two) / (one * two));
		printf("please enter two numbers with a fractional part:\n");
	}while (scanf("%f %f", &one, &two));

}