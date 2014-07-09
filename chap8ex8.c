/*
8:	
Write a program that shows you a menu offering you the choice of addition, subtraction, multiplication, or division.
After getting your choice, the program asks for two numbers, then performs the requested operation.
The program should accept only the offered menu choices.
It should use type float for the numbers and allow the user to try again if he or she fails to enter a number.
In the case of subtraction, the program should prompt the user to enter a new value if 0 is entered as the value for the second number.
*/

#include <stdio.h>
#include <ctype.h>
#define ERROR printf("\n***ERROR***\n\007")
#define RETRY printf("Please enter a number, such as 2.5, -1.78E8, or 3: 1: ")
int main(void)
{
	int ch;
	float first, second, result;
	char operator;

	do{
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
			   "~ Enter the letter corresponding to the operation of your choice:~\n"
               "~ a. add           s. subtraction                                ~\n"
		       "~ m. multiply      d. divide                                     ~\n"
               "~ q. quit                                                        ~\n"
               "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nchoice: _\b");
		while ((ch = getchar()) != 'q'){
			ch = tolower(ch);
			if (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd'){
				ERROR;
				printf("\nYou must choose one of the letters in the menu!\n(a, s, m, d, or q to quit)\n");
				break;
			}
			printf("Please enter first number: ");

			while (scanf("%f", &first) < 1){
					ERROR;
					printf("You must enter a number\n");
					while(getchar() != '\n')
						continue;
					RETRY;
			}
			
			printf("Please enter second number: ");

			while (scanf("%f", &second) < 1){
					ERROR;
					printf("You must enter a number\n");
					while(getchar() != '\n')
						continue;
					RETRY;
			}
			switch(ch){
				case 'a':
					result = first + second;
					operator = '+';
					break;
				case 's':
					if (second == 0){
						printf("Please enter a number other than 0:........\b\b\b\b\b\b\b\b");
						scanf("%f", &second);
					}
					result = first - second;
					operator = '-';
					break;
				case 'm':
					result = first * second;
					operator = 'x';
					break;
				case 'd':
					result = first / second;
					operator = '/';
					break;
			}
			printf("\nRESULT: %.1f %c %.1f = %.1f\n", first, operator, second, result);

			while(getchar() != '\n')
				continue;
			break;
		}
	}while(ch != 'q');

	printf("\nBye.\n");

	return 0;
}