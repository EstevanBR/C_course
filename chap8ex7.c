/*
chap8ex7.c
7.
Modify exercise 8 from Chapter 7 so that the menu choices are labeled by characters instead of by numbers.


Write a program that requests the hours worked in a week and then prints the gross pay, the taxes, and the net pay.
Assume the following:

Basic pay rate = $10.00/hr

Overtime (in excess of 40 hours) = time and a half

Tax rate: 15% of the first $300

20% of the next $150

25% of the rest

Use #define constants, and don't worry if the example does not conform to current tax law.
*/

#include <stdio.h>
#define ORATE (rate * 1.5)
#define FIRSTTAX .15
#define SECONDTAX .20
#define THIRDTAX .25
int main(void)
{
	int hours, selection;
	float gross = 0, net, taxes, rate;
	printf("Hello, please enter the number corresponding to the desired pay rate or action\na) $8.75/hr\t\t\tb) $9.33/hr\nc) $10.00/hr\t\t\td) $11.20/hr\nq) quit\n");
	
	selection = getchar();
	switch(selection){
		case 'a': rate = 8.75;
				break;
		case 'b': rate = 9.33;
				break;
		case 'c': rate = 10.00;
				break;
		case 'd': rate = 11.20;
				break;
		case 'q': printf("Thank you and goodbye\n");
				return 0;
	}

	printf("You have selected an hourly rate of: %.2f\n", rate);
	printf("How many hours did you work this week?\n");
	scanf("%d", &hours);

	if (hours <= 40)
		gross += hours * rate;
	else
		gross += ((hours - 40) * ORATE) + (40 * rate);

	switch((gross > 450) + (gross > 300)){
		case 0: taxes = gross * FIRSTTAX;
		break;
		case 1: taxes = gross * SECONDTAX;
		break;
		case 2: taxes = gross * THIRDTAX;
		break;
	}
	net = gross - taxes;
	printf("Gross pay = %.2f, Taxes = %.2f, Net pay = %.2f\n", gross, taxes, net);

	return 0;
}