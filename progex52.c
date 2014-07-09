//
//  progex52.c
//  
//
//  Created by Estevan Hernandez on 5/9/14.
//
//

#include <stdio.h>
#include <string.h>
int main(void)
{
    char first[40];
    int firstlen;
    
    printf("Please type your first name and press [ENTER]\n");
    scanf("%s", first);
    firstlen = strlen(first)+3;
    printf("\n2.a enclosed in double quotes:\n");
    printf("\"%s\"\n\n", first);
    printf("2.b double quotes, 20 characters:\n");
    printf("\"%20s\"\n\n", first);
    printf("2.c left justified 20 characters w/ double quotes:\n");
    printf("\"%-20s\"\n\n", first);
    printf("2.d field is 3 characters wide than characters in string:\n");
    printf("\"%*s\"\n\n", firstlen, first);
    
    return 0;
}