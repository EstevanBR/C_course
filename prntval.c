//
//  prntval.c
//  
//
//  Created by Estevan Hernandez on 5/9/14.
//
//

#include <stdio.h>
#include <string.h>
int main(void)
{
    int rv, bph2o = 212;
    
    rv = printf("\n%d F is water's boiling point.\n", bph2o);
    printf("\nThe printf() function printed %d characters\n", rv);
    rv = strlen("\n%d F is water's boiling point.\n");
    printf("\n%d \n", rv);
    
    int age;
    float assets;
    char petname[40];
    
    printf("enter you age, assets, and favorite pet please\n");
    printf("age:__\b\b");
    scanf("%d", &age);
    printf("\nassets:_______\b\b\b\b\b\b\b");
    scanf("%f", &assets);
    printf("\npet name:_______\b\b\b\b\b\b\b");
    scanf("%s", petname);
    
    printf("\n-------------\nHello, you are %d years old, have %.2f in the bank, and your favorite pet is named %s\n-------------\n", age, assets, petname);
    
    return 0;
    
}