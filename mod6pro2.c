/*
2.	Write a program that creates a structure template with the following data fields.
The program should then prompt the user to enter the data to populate the structure.
Finally, use printf() to display the information entered by the user.
	a.	Account number
	b.	Account owner street address (string)
	c.	Account owner city/state (string)
	d.	Account owner zip code
	e.	Account balances
	f.	Account credit limit
	g.	Account name
*/
#include <stdio.h>
#include <string.h>
int main(void){

	struct information{
		long long int acct_num;
		char address[100];
		char citystat[100];
		int zip_code;
		float balances;
		float crdtlimt;
		char name[100];
	};
	struct information bank;

	printf("Please enter the following info and press enter-\n");
	printf("Your account number:\n");
	scanf("%lld", &bank.acct_num);
	while(getchar() != '\n')
		continue;
	printf("Please enter you street address (ex: 110 Road St):\n");
	gets(bank.address);
	printf("Please enter your city and state:\n");
	gets(bank.citystat);
	printf("Now your zip code please (5 digits):\n");
	scanf("%5d", &bank.zip_code);
	printf("Now enter your ACCOUNT BALANCE:\n");
	scanf("%f", &bank.balances);
	printf("Now enter the credit limit:\n");
	scanf("%f", &bank.crdtlimt);
	while(getchar() != '\n')
		continue;
	printf("and lastly, the name of the person:\n");
	gets(bank.name);

	printf("\n*************************\n"
		   "Here is what you entered:\n"
		   "Account number:...%lld\n"
		   "Address:..........%s %s %d\n"
		   "Balances:........$%.2f\n"
		   "Credit Limit:....$%.2f\n"
		   "Name:.............%s\n", bank.acct_num, bank.address, bank.citystat, bank.zip_code, bank.balances, bank.crdtlimt, bank.name);

	return 0;
}
