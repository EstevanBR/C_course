//
//  talkback.c
//  
//
//  Created by Estevan Hernandez on 5/6/14.
//
//

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define DENSITY 62.4

int main(void)
{
    float weight, volume;
    int size, letters, i;
    char name[40];
    
    printf("Hi! what's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your name has %d letters,\n", letters);
    printf("and we have %d bytes to store it in.\n", size);
    
    return 0;
}
