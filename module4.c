/*
module4.c

1. Provide a good descriptive function name (correct syntax) that would be appropriate for each of the following:
a. function1() takes no arguments and returns no arguments
b. function2() takes one argument but returns no arguments
c. function3() takes two arguments and returns one argument
d. function4() takes no arguments but returns one argument

2. Make up at least five more of your own original function prototypes using a descriptive function name with appropriate arguments and post to the message board.
*/

#include <stdio.h>
#include <ctype.h>
void beeper(void); /* prints a beep */
void beeps(int amount); /* prints beeps */
int floorSum(float num, float num2); /* adds two numbers and returns the floor of the sum ex. 5.3 + 5.3 = 10.6 but function returns 10 */
char firstLett(void); /* returns the first letter of a string entered by the user. */
void clear(void);
int main(void)
{
	int i;
	beeper();
	printf("please enter how many beeps_\n");
	scanf("%d", &i);
	beeps(i);
	printf("# of beeps + 10 = %d\n", floorSum(i, 10));
	printf("The first letter is: %c\n", firstLett());

	return 0;
}

void beeper(void)
{
	printf("\007");
}
void beeps(int amount)
{
	int i;
	for (i = 0; i < amount; i++)
		printf("\007");
}
int floorSum(float num, float num2)
{
	return num + num2;
}
char firstLett(void)
{
	char choice;
	printf("Please enter text\n");
	clear();
	choice = getchar();
	clear();
	choice = toupper(choice);
	return choice;
}

void clear(void)
{
	while (getchar() != '\n')
		continue;
}