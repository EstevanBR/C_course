/************************************************
* filename: module24.c
* Exercise: Module 2, Programming Assignment 4
* Name: Estevan Hernandez
* Date Created: May 16, 2014
*
* Description: User enters price of item, sales tax
* of 5.6% is then added to the price of the item
* and then displayed to the user.
*************************************************/
#include <stdio.h>
#define TAX .056
int main(void)
{
	float price;
	int dollars, cents;

	printf("Enter price of item:\n");
	scanf("%f", &price);
	printf("Item price of %c%.2f ", '$', price); /* prints price before sales tax as added*/

	price = price + price * TAX; /* adds sales tax*/
	dollars = price; /*because price is an int variable, the fractional part is truncated from the dollar amount*/
	cents = ((price - dollars) * 100); /* subtracts dollar amount from price to get cents, multiples by 100 and saves as an int*/

	printf("with sales tax is %d dollars and %d cents.\n", dollars, cents);

	return 0;
}