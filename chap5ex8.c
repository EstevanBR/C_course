#include <stdio.h>
void Tempuratures(double n);
int main(void)
{
	double far;
	
	printf("please enter a tempurature in Farenheight:\n");
	scanf("%le", &far);

	while(far > 0)
	{
		printf("it will now be converted into Celsius and Kelvin\n");
		Tempuratures(far);
		printf("again? please enter a tempurature in Farenheight (or type 0 to quit):\n");
		scanf("%le", &far);
	}
	printf("Goodbye\007\n");

	return 0;
}

void Tempuratures(double n)
{
	const double cel = (n -32) / 1.8;
	const double kel = cel + 273.16;

	printf("\nFarenheight =\t%10.2f\nCelsius =\t%10.2f\nKelvin =\t%10.2f\n\n", n, cel, kel);
}