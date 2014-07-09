//
//  progex55.c
//  
//
//  Created by Estevan Hernandez on 5/9/14.
//
//

#include <stdio.h>
#include <string.h>
int main(void)
{
    char first[40], last[40];
    int firstlen, lastlen;
    
    printf("\nHello and welcome to my program, could you please enter your first and last name, seperated by a space and then press [ENTER]?\nThank you.\n_____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    scanf("%s %s", first, last);
    firstlen = strlen(first);
    lastlen = strlen(last);
    printf("Thank you, here is your full name, with the amount of characters in your name printed below\n\n");
    printf("%s %s\n%*d %*d\n\n", first, last, firstlen, firstlen, lastlen, lastlen);
    printf("...and again, but justified left this time\n\n");
    printf("%s %s\n%-*d %-*d\n\n", first, last, firstlen, firstlen, lastlen, lastlen);
    
    return 0;
    
}
