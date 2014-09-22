/* quit_chk.c -- beginning of some program */
#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIMIT 100
#define STOP "quit"
int main(void)
{
    char input[LIMIT][SIZE];
    int count = 0;

    printf("Enter up to %d lines (type quit to quit):\n", LIMIT);
    while (count < LIMIT && gets(input[count]) && //while user has not entered 100 stirngs. gets does not encounter null. compare returns true. incermeent count
           strcmp(input[count],STOP)) //strcmp returns 0 if TRUE. opposite of most functions.
    {
        count++;
    }
    printf("%d strings entered\n", count);

    return 0;
}