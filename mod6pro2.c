/************************************************
	* filename: mod6pro2.c
	* Assignment: Module 6, Programming Assignnment 2
	* Name: Estevan Hernandez
	* Date Created: October 11, 2014
	*
	* Write a program that creates a structure template with the following data fields.
	* The program should then prompt the user to enter the data to populate the structure.
	* Finally, use printf() to display the information entered by the user.
	* a.	Account number
	* b.	Account owner street address (string)
	* c.	Account owner city/state (string)
	* d.	Account owner zip code
	* e.	Account balances
	* f.	Account credit limit
	* g.	Account name
	*************************************************/

#include <stdio.h>
#include <string.h>
int main(void){

	struct information{
		long long int acct_num; /* because there were was no specification for how many digits to support,
		I chose to use long long int, but, depending on the implementation I would consider just using a string as well*/
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
	while(getchar() != '\n') /* clear newline from buffer */
		continue;
	printf("Please enter you street address (ex: 123 Road St):\n");
	fgets(bank.address, 100, stdin);
	printf("Please enter your city and state (ex: Cupertino, CA):\n");
	fgets(bank.citystat, 100, stdin);
	printf("Now your zip code please (5 digits):\n");
	scanf("%5d", &bank.zip_code);
	printf("Now enter your ACCOUNT BALANCE:\n");
	scanf("%f", &bank.balances);
	printf("Now enter the credit limit:\n");
	scanf("%f", &bank.crdtlimt);
	while(getchar() != '\n')
		continue;
	printf("and lastly, the name of the person:\n");
	fgets(bank.name, 100, stdin);

	/* gets() is unsafe because of the possibility of overflow,
	so I used fgets() instead, but because I did, the '\n' characer is a part of the each of the strings,
	so I need to replace the newline with a null,
	the following code does that by using strlen() to determine the length (including '\0' or null),
	and replacing the character before that, which is presumably '\n' with '\0'
	I added if statements in case for whatever reason the character is not '\n'*/
	if(bank.address[strlen(bank.address)-1] == '\n')
	bank.address[strlen(bank.address)-1] = '\0';
	if(bank.name[strlen(bank.name)-1] == '\n')
	bank.name[strlen(bank.name)-1] = '\0';
	if(bank.citystat[strlen(bank.citystat)-1] == '\n')
	bank.citystat[strlen(bank.citystat)-1] = '\0';

	printf("\nHere is what you entered:\n"
		   "Account number:...%lld\n"
		   "Address:..........%s, %s %d\n" /* combines the address, city, state, and zip all on one line */
		   "Balances:.........$%.2f\n"
		   "Credit Limit:.....$%.2f\n"
		   "Name:.............%s\n", bank.acct_num, bank.address, bank.citystat, bank.zip_code, bank.balances, bank.crdtlimt, bank.name);

	return 0;
}
