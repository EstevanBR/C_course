/*
6:	
Modify the get_first() function of Listing 8.8 so that it returns the first non-whitespace character encountered.
Test it in a simple program.

menuette.c -- menu techniques */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
char get_first(void);

int main(void)
{
	int ch;

    ch = get_first();

    printf(	"\nthe first non-whitespace character you entered is: %c\n"
    		"Which has an ASCII code of: %-3d\n", ch, ch);

    return 0;
}

char get_first(void)
{
    int ch;
    while (isspace((ch = getchar())))
    	continue;
    return ch;
}