/* chap7x11.c - Estevan Hernandez
program for ordering vegatbles of artichokes,
beets, and carrots, and calulating discounts and shippings costs */
#include <stdio.h>
#define DISCOUNT .05
int main(void)
{
	const float artichokesprice = 1.25;
	const float beetsprice = .65;
	const float carrotsprice = .89;
	const float tier1ship = 3.50;
	const float tier2ship = 10.00;
	const float tier3ship = 8.00;
	const float tier3shipadd = .10;
	float artichokesdes = 0;	//this is to prevent garbage data from contaminating unentered values
	float beetsdes = 0;			//this is to prevent garbage data from contaminating unentered values
	float carrotsdes = 0;		//this is to prevent garbage data from contaminating unentered values
	float total;
	float grandtotal;
	float shipping;
	float costperpound;
	float artichokescost;
	float beetscost;
	float carrotscost;
	int pounds = 0;
	int discount = 0;
	int tier;
	char ch;

	printf("Enter a letter corresponding to which items you are planning to order:\n"
		"a) artichokes\t\tb) beets\nc) carrots\t\tq) to quit ordering process and calculate additional costs (S&H, discounts).\n_\b");
	
	while ((ch = getchar()) != 'q')
		switch(ch){
			case 'a':	printf("Please enter how many pounds of Artichokes you are ordering:");
						scanf("%f", &artichokesdes);
			break;
			case 'b':	printf("Please enter how many pounds of Beets you are ordering:");
						scanf("%f", &beetsdes);
			break;
			case 'c':	printf("Please enter how many pounds of Carrots you are ordering:");
						scanf("%f", &carrotsdes);
			break;
			continue;
	}

	artichokescost 	= (artichokesdes * artichokesprice);	//calculates individual costs of vegetables that add up to the total cost
	beetscost 		= (beetsdes * beetsprice);				//calculates individual costs of vegetables that add up to the total cost
	carrotscost 	= (carrotsdes * carrotsprice);			//calculates individual costs of vegetables that add up to the total cost
	pounds = artichokesdes + beetsdes + carrotsdes;			//calculates individual costs of vegetables that add up to the total cost
	total = artichokescost + beetscost + carrotscost;		//calculates individual costs of vegetables that add up to the total cost

	if (total >= 100.00)
		{
			total = total - (total * DISCOUNT);
			discount = 1;
			artichokescost = artichokescost - (artichokescost * DISCOUNT);
			beetscost = beetscost - (beetscost * DISCOUNT);
			carrotscost = carrotscost - (carrotscost * DISCOUNT);
		}
	
	if (pounds <= 5)
		tier = 1;
	if (pounds > 5 && pounds < 20)
		tier = 2;
	if (pounds >= 20)
		tier = 3;
	
	switch(tier){
		case 1:		shipping = tier1ship;
		break;
		case 2:		shipping = tier2ship;
		break;
		case 3:		shipping = ((pounds - 20) * tier3shipadd) + (tier3ship);
		break;
	}

	grandtotal = total + shipping;			//calculates grand total
	costperpound = (grandtotal / pounds);	//calculates average cost per pound of items ordered

	printf("\nCost per pound = $%-5.2f\n", costperpound);
	printf("Pounds ordered = %-d lbs\n",pounds);
	printf("Cost for artichokes = $%-5.2f\nCost for beets = $%-5.2f\nCost for carrots = $%-5.2f\n", artichokescost, beetscost, carrotscost);
	printf("Total = $%-5.2f\n", total);
	printf("Discount applied = $%-5.2f\n", (discount) ? total / .95: 0);
	printf("Shipping charge = $%-5.2f\n", shipping);
	printf("Grand total = $%-5.2f\n", grandtotal);
	printf("Done!\n");

	return 0;
}