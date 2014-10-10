#include <stdio.h>
int main(void)
{


//Short Answers
//Questions

//1. Write code to open a file called adata.out, and write the contents of the following array out to it in binary form (with no data conversion).
//	int a[5];

//2. What would be the best file mode for each of the following cases?
//	a. reading binary data in an existing file
//	b. adding new text data to the end of an existing file
//	c. replacing the current contents of an existing file with new text data, then 3. modifying the new data

//3. You are writing a function that has to keep track of the number of times it is called. What storage classes could be used for a variable that could retain this information? Which one would you recommend?

"I would use static or extern. However I would probably recommend static."
"Static variables declared in a function are remembered by that function whenever it is called."
"I first though it would be good to just use a global variable but that's a questionable practice."

//4. Describe how the const qualifier was used to "improve," that is, make more readable and reliable, the program in Listing 14.8, pages pages 554-555.



//Discussion Assignments:
//1. Create three of your own structures definitions.
	struct happy{
		int cars = 2;
		float money = 22.5;
	}

	struct usr_form{
		char name[20];
		int wins;
	}

	typedef struct{
		int age;
		int weight;
		char notes[100];
	}

//2. Identify either one similarity or one difference between an array and a structure.

"Both hold elements of data stored by byte size. A struct is almost like an array of arrays but its better for a lot of things."

//3. Looking at the partial program code below, how could you determine if the functions printf(), sqrt() and doubl() were user defined functions or from the C Standard Library. Assume the program is complete, compiles and runs correctly. Each student is to provide one unique method for determination.

	int main(void)
	{
	   int x = 4;
	   printf("Square root = %f twice x = %f", sqrt(x), doubl(x) ); 
	   return 0;
	}
 
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