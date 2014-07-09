/*	
Write a program that requests the hours worked in a week and then prints the gross pay, the taxes, and the net pay. Assume the following:

Basic pay rate = $10.00/hr

Overtime (in excess of 40 hours) = time and a half

Tax rate: 15% of the first $300

20% of the next $150

25% of the rest

Use #define constants, and don't worry if the example does not conform to current tax law.
*/

#include <stdio.h>
#define RATE 10.00
#define ORATE (RATE * 1.5)
#define FIRSTTAX .15
#define SECONDTAX .20
#define THIRDTAX .25
int main(void)
{
	int hours;
	float gross = 0, net, taxes;

	printf("how many hours did you work this week?\n");
	scanf("%d", &hours);

	if (hours <= 40)
		gross += hours * RATE;
	else
		gross += ((hours - 40) * ORATE) + (40 * RATE);

	switch((gross > 450) + (gross > 300)){
		case 0: taxes = gross * FIRSTTAX;
		break;
		case 1: taxes = gross * SECONDTAX;
		break;
		case 2: taxes = gross * THIRDTAX;
		break;
	}
	net = gross - taxes;
	printf("Gross pay = %.2f, taxes = %.2f, net pay = %.2f\n", gross, taxes, net);

	return 0;
}