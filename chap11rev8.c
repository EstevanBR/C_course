#include <stdio.h>
int main(void)
{
    char string1[] = "gawsie";
    char string2[] = "bletonism";
    char *pointstring;
    int i = 0;

    for (pointstring = string1; *pointstring != '\0'; pointstring++) {
         if ( *pointstring == 'a' || *pointstring == 'e')
                putchar(*pointstring);
         else
                (*pointstring)--;
         putchar(*pointstring);
        }
    putchar('\n');
    while (string2[i] != '\0' ) {
       printf("%c", i % 3 ? string2[i] : '*'); //if i mod 3 is greater than 0, print the character, else print asterik
       ++i;
       }
    return 0;
}

/*
faavrhee
*le*on*sm
*/