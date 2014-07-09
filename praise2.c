//
//  praise2.c
//  
//
//  Created by Estevan Hernandez on 5/6/14.
//
//

#include <stdio.h>
#include <string.h>
#define PRAISE "What a super cool name!"
int main(void)
{
    char name[40];
    
    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %d letters occupies %d memory cells.\n",
           strlen(name), sizeof(name));
    printf("The phrase of priase has %d letters ",
           strlen(PRAISE));
    printf("and occupies %d memory cells \n", sizeof PRAISE);
    
    return 0;
}