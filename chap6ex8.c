/*chap6ex8.c*/
#include <stdio.h>
float function(float one, float two);
int main(void)
{
	float one, two;

	
		printf("please enter two numbers with a fractional part:\n");
		scanf("%f %f", &one, &two);
	do{
		printf("(%.4f - %.4f) / (%.4f %.4f) = %.4f\n", one, two, one, two, function(one, two));
		printf("please enter two numbers with a fractional part:\n");
	}while (scanf("%f %f", &one, &two));

	return 0;
}

float function(float one, float two)
{	
	float result;

	result = (one - two) / (one * two);

	return result;
}