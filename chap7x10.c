/*
chap7x10.c
*/
#include <stdio.h>
int main(void)
{
	int choice;
	float rate, gross, net;
	printf("Are you:\n1) Single\n2) Head of Household\n3) Married, joint\n4) Married Seperate\n5) Quit program.\n");
	scanf("%d", &choice);

	switch(choice){
		case 1: rate = 17850;
		break;
		case 2: rate = 23900;
		break;
		case 3: rate = 29750;
		break;
		case 4: rate = 14875;
		break;
		case 5: return 0;
	}
	printf("Please enter taxable income:");
	while (scanf("%f", &gross))
	{
		net = 0.15 * rate + 0.28 * (gross - rate);
		printf("With a gross income of %.2f\n
			the taxes you owe the IRS are %.2f\n
			Please enter more taxable income or '#' to quit:", gross, net);
	}
	return 0;

}

/*
Category								Tax
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Single									15% of first $17,850 plus 28% of excess
Head of Household						15% of first $23,900 plus 28% of excess
Married, joint							15% of first $29,750 plus 28% of excess
Married, Separate						15% of first $14,875 plus 28% of excess
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/