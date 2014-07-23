/************************************************
    * filename: mod4pro2.c
    * Assignment: Module 4, Programming Assignnment 2
    * Name: Estevan Hernandez
    * Date Created: July 22, 2014
    *
    * Program that prompts the user to enter
    * in a character and an integer.
    * displays the character by duplicating it the
    * integer number of times on the screen with a
    * single space between the characters.
    *************************************************/
#include <stdio.h>
#define SPACE ' '
void repeater(int ch, int num); // takes 2 int arguments, a character to be printed, and int for how many times
void clear(void); //this is for clearing the buffer
int main(void)
{
    int asc; //asc for ASCII
    int rep = 0; //rep for repititions

    printf("Please enter a character and then enter an integer,\nThe character: _\b");

    asc = getchar();
    clear(); //clears buffer

    printf("The number (integer, 0 to quit): ");

    scanf("%d", &rep);

    if (rep !=0) 
        repeater(asc, rep);
    else
        printf("Please enter an integer next time (not 0)\nBye\n"); //because rep is initialized as 0, if scanf failed it will remain unchanged, or the user entered 0 BAD USER!

    return 0;
}

void repeater(int ch, int num)
{
    int i;
    for(i = 0; i < num; i++)
    {
        putchar(ch);
        putchar(SPACE);
    }
    printf("\n"); //for my own sanity.
}

void clear(void)
{
    while(getchar() != '\n')
        continue;
}
