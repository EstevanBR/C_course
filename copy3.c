/* copy3.c -- strncpy() demo */
#include <stdio.h>
#include <string.h>  /* declares strncpy() */
#define SIZE 40
#define TARGETSIZE 7
#define LIMIT 5
int main(void)
{
    char qwords[LIMIT][TARGETSIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enter %d words beginning with q:\n", LIMIT);
    while (i < LIMIT && gets(temp))
    {
        if (temp[0] != 'q')
            printf("%s doesn't begin with q!\n", temp);
        else
        {
            strncpy(qwords[i], temp, TARGETSIZE - 1);
            qwords[i][TARGETSIZE - 1] = '\0';
            i++;
        }
    }
    puts("Here are the words accepted:");
    for (i = 0; i < LIMIT; i++)
        {
            puts(qwords[i]);
            //puts(&temp[i]);
        }

    return 0;
}