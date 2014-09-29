/* chap11rev11.c -- this will work
Rewrite Listing 11.17 using ctype.h functions so that the program recognizes a correct answer regardless of the user's choice of uppercase or lowercase.
*/
#include <stdio.h>
#include <string.h>   /* declares strcmp() */
#include <ctype.h>
#define ANSWER "Grant"
#define MAX 40
void changling(char array[]);
int main(void)
{
    char try[MAX];

    puts("Who is buried in Grant's tomb?");
    gets(try);
    changling(try);
    while (strcmp(try,ANSWER) != 0)
    {
        puts("No, that's wrong. Try again.");
        gets(try);
        changling(try);
    }
    puts("That's right!");

    return 0;
}

void changling(char array[])
{
    int i;
    array[0] = toupper(array[0]);
    for(i = 1; array[i] != '\0'; i++)
    {
        array[i] = tolower(array[i]);
    }
}