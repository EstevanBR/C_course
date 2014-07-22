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
void beeper(void);
void beeps(int amount);
int floorsum(float num, float num2);
char getsize(void);
void clear(void);
int main(void)
{
	int i;
	beeper();
	printf("please enter how many beeps_\n");
	scanf("%d", &i);
	beeps(i);
	printf("# of beeps + 10 = %d\n", floorsum(i, 10));
	printf("You chose %c\n", getsize());

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
int floorsum(float num, float num2)
{
	return num + num2;
}
char getsize(void)
{
	char choice;
	printf("Please enter the letter corresponding to the desired shirt size:\n"
		   "A: small\t\tB: Medium\nC: Large\t\tD: Extra Large\nE: Extra Extra Large\n");
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