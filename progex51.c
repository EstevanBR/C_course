//
//  progex51.c
//  
//
//  Created by Estevan Hernandez on 5/9/14.
//
//

#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main(void)
{
    char first[40], last[40];
    printf("\nplease enter your first and last name seperated by a space\nthen press [ENTER]\n");
    scanf("%s%s", first, last);
    printf("\nThanks! Now I will print your name in last-first format!");
    printf("\n%s %s\n\n\nDone!\007", last, first);
    
    return 0;
}
