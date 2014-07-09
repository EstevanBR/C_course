/* chap6x15.c */
#include <stdio.h>
int main(void)
{
	float daphne = 100.00, deirdre = 100.00;
	int years = 0;
	
	do{
		years++;
		deirdre *= (1.05);
		daphne += 10;
	}while(daphne > deirdre);

	printf("in %d years, Deirdre's investment will be $%-7.2f, exceeding Daphne's investment of $%-7.2f.\n", years, deirdre, daphne);

	return 0;
}

/*
Daphne invests $100 at 10% simple interest.
(That is, every year, the investment earns an interest equal to 10% of the original investment.)

Deirdre invests $100 at 5% interest compounded annually.
(That is, interest is 5% of the current balance, including previous addition of interest.)

Write a program that finds how many years it takes for the value of Deirdre's investment
to exceed the value of Daphne's investment. Also show the two values at that time.

*/