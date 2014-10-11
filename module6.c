#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME 100
#define ENTRANTS 10
int main(void){
//Discussion Assignments:
//1. Create three of your own structures definitions.
	struct information{
		float weight;
		int dob_m;
		int dob_y;
		int dob_d;
		char name_f[20];
		char name_l[20];
	};

	struct stats{
		int dexterity;
		int strength;
		int luck;
		int wisdom;
		int defense;
		int attack;
		char name[16];
	};

	struct car{
		int axles;
		float hrspwr;
		float weight;
	};

	struct information passenger[3];
	struct stats players[10];
	struct car formula_one[120];

	int i;
	for(i = 0; i < 3; i++)
	{
		printf("ENTER INFO FOR PASSENGER %d\n", i+1);
		printf("Please enter weight _\b");
		scanf("%f", &passenger[i].weight);
		printf("Please enter month\n");
		scanf("%d", &passenger[i].dob_m);
		printf("Please enter day\n");
		scanf("%d", &passenger[i].dob_d);
		printf("Please enter year\n");
		scanf("%d", &passenger[i].dob_y);
		printf("Please enter first and last name\n");
		scanf("%20s %20s", passenger[i].name_f, passenger[i].name_l);
	}
	for(i=0;i<3;i++)
	{
		printf("\npassenger %d\n%s %s\nDOB %2d/%2d/%4d\nweight%.2f\n", i+1, passenger[i].name_f, passenger[i].name_l, passenger[i].dob_m, passenger[i].dob_d, passenger[i].dob_y, passenger[i].weight);
	}

//2. Identify either one similarity or one difference between an array and a structure.

//"Both hold elements of data stored by byte size. A struct is almost like an array of arrays but its better for a lot of things. In my head I imagine a structure to be a 3 dimensional array but the tables can be different sizes and types"

//3.

	printf("honestly, with only looking at this segment of code.. and not playing with it or having any sort of documentation. I don't think i could determine if they were or not. but if I could bend the rules, I would first look at what header files were included, I could see if any have double quotes \"header.h\" instead of arrows <header.h> which would be one sign. then i would comment out the header to see what happens. which functions break, which ones don't. another obvious thing to look for would be whether or not these functions are prototyped and defined elsewhere in the source code\n\n");
 
//Please post your response as a "reply" to this post. If you are responding to another student's post, please click on that message and post your reply.
 
//No duplicate postings or examples from the text book! Each entry must be unique by each student for all discussion forum postings for all six modules.

//Programming Assigments:
//1.	Write a program that sequentially displays on screen the contents of all of the files listed in the command line. Use argc to control a loop.
//2.	Write a program that creates a structure template with the following data fields. The program should then prompt the user to enter the data to populate the structure. Finally, use printf() to display the information entered by the user.
//	a.	Account number
//	b.	Account owner street address (string)
//	c.	Account owner city/state (string)
//	d.	Account owner zip code
//	e.	Account balances
//	f.	Account credit limit
//	g.	Account name
//3.	Write a program that converts a user entered temperature in Fahrenheit to Celsius incorporating three modules and functions named as identified below. The user entered Fahrenheit temperature is to be passed as an argument to the function named convert() in the module "conversion.c". The calculated Celsius value is to be return by the function and the result displayed to the user in the function main() : 
//	a.	convert_driver.c - contains the function main() and the user interface
//	b.	conversion.h - contains the prototype for a function named convert()
//	c.	convertsion.c - contains the function definition for convert() 
//4.	Write a calculator program that adds and subtracts. Prompt the user to enter two values and select an operation to perform. Incorporate a program with five modules and functions named as follows:
//	a.	calc_driver.c - contains the function main() and the user interface
//	b.	addition.h - contains the prototype for a function named add()
//	c.	addition.c - contains the function definition for add()
//	d.	subtraction.h - contains the prototype for a function named subtract()
//	e.	subtraction.c - contains the function definition for subtract()


	return 0;
}