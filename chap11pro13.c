#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	/* code */
	
	double num;
	int power;
	double product;

	sscanf(argv[1], "%lf", &num);
	sscanf(argv[2], "%d", &power);
	printf("double is %lf and int is %d\n", num, power);
	
	product = pow(num, power);

	printf("%lf\n", product);
	
	return 0;
}