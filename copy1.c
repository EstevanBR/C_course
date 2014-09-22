/* copy1.c -- strcpy() demo */
#include <stdio.h>
#include <string.h>  /* declares strcpy() */
#define SIZE 40
#define LIMIT 5

int main(void)
{
    char qwords[LIMIT][SIZE];
    char temporary[SIZE];
    int i = 0;

    printf("Enter %d words beginning with q:\n", LIMIT);
    while (i < LIMIT && gets(temporary))
    {
        if (temporary[0] != 'q')
            printf("%s doesn't begin with q!\n", temporary);
        else
        {
            strcpy(qwords[i], temporary);
            i++;
        }
    }
    puts("Here are the words accepted:");
    for (i = 0; i < LIMIT; i++)
        puts(qwords[i]);

    return 0;
}