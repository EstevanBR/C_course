/************************************************
    * filename: mod4pro2.c
    * Assignment: Module 4, Programming Assignnment 2
    * Name: Estevan Hernandez
    * Date Created: July 22, 2014
    *
    * Program that prompts the user to enter
    * two values of data type "double".  Implements a
    * function called print_doubles() that takes the
    * two arguments of data type "double" and uses
    * printf() to display both.
    *************************************************/
#include <stdio.h>
void print_doubles(double num, double num2);
int main(void)
{
	double first, second;

    printf("Please enter 2 numbers with a fractional part: ");
    scanf("%lf", &first);
    printf("Now enter the second number: ");
    scanf("%lf", &second);
    print_doubles(first, second);

    return 0;
}

void print_doubles(double num, double num2)
{
    printf("%lf %lf\n", num, num2);
}

