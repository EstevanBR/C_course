/* chap6x16.c */
#include <stdio.h>
int main (void)
{
	float initial = 1000000;
	int years;

	for (years = 0; initial > 0; initial *= 1.08, years++)
		initial -= 100000;
	printf("it will take %d years for Chuckie Lucky to bleed dry.\n", years);

	return 0;

}
/*
Chuckie Lucky won a million dollars, which he places in an account that earns 8% a year.
On the last day of each year, Chuckie withdraws $100,000. Write a program that finds out
how many years it takes for Chuckie to empty his account.
*/