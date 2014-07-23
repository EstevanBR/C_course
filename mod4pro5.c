/************************************************
    * filename: mod4pro5.c
    * Assignment: Module 4, Programming Assignnment 5
    * Name: Estevan Hernandez
    * Date Created: July 23, 2014
    *
    * Prompts the user to enter in two integers.
    * Implements a function called max_value()
    * that takes two arguments that are
    * pointers to two integers entered by the user.
    * The function max_value() determines which of
    * the two values is the largest and assigns the
    * max value to both variables.
    * The function main()then displays the values of
    * both variables to demonstrate that they both
    * contain the max value.  For example:
	*
	* Enter two integers:     23  57 
	* Both values are now: 57  57
    *************************************************/
#include <stdio.h>
void max_value(int * num, int * num2);
int main(void)
{
	int first, second;
	
	printf("\nPlease enter 2 integers: ");
	scanf("%d %d", &first, &second);
	max_value(&first, &second); //sends addresses to function
	printf("Both values are now %d %d\n\n", first, second);
	
	return 0;
}

void max_value(int * num, int * num2)
{
	if(*num > *num2) //reads value at addresses num and num2
		*num2 = *num; //changes num2 to num if num is bigger
	else
		*num = *num2; //vice versa
}