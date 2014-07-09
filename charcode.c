//
//  charcode.c
//  
//
//  Created by Estevan Hernandez on 5/2/14.
//
//

#include <stdio.h>
int main(void)
{
    char ch;
    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("The code for %c is %d.\n", ch, ch);
    
    return 0;
}