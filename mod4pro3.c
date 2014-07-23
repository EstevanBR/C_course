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
void repeater(int ch, int num);
void clear(void);
int main(void)
{
    char asc;
    int rep = 0;

    printf("Please enter a character and then enter an integer,\nThe character: _\b");

    asc = getchar();
    clear();

    printf("The number (integer, 0 to quit): ");
    
    scanf("%d", &rep);
    if (rep !=0)
        repeater(asc, rep);
    else
        printf("Please enter an integer next time (not 0)\nBye\n");

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
    printf("\n");
}

void clear(void)
{
    while(getchar() != '\n')
        continue;
}
