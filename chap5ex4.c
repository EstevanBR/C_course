#include <stdio.h>
#define C_PER_F 30.48
#define I_PER_F 12
#define C_PER_I 2.54
int main(void)
{
	int feet;
	float cent, inches;

	printf("\nHello, please enter # of centimeters to be converted to feet and inches [or enter 0 to quit]\n");
	printf("centimters: ");
	scanf("%f", &cent);
	//printf("\n");
	while(cent > 0)
	{
		feet = cent / C_PER_F;
		inches = (cent - feet * C_PER_F) / C_PER_I;

		printf("%.2f cm equals:\t%4d ft. %2.2f in.\t", cent, feet, inches);
		printf("again? enter # of centimeters [0 to quit]:");
		scanf("%f", &cent);
	}
	printf("Thanks\n");

	return 0;

}