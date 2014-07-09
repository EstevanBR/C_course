//
//  chapter3.c
//  
//
//  Created by Estevan Hernandez on 5/6/14.
//
//this is a program containing the programming exercises from chapter 3

#include <stdio.h>
int main(void)
{
    int exercise;
    
    printf("Hello, please type a number 1-7 and press [ENTER], the number you input will pull the programming exercise of the same number from chapter 3 of the course book. Thanks. :)\n Please enter your number: _\b");
    scanf("%i", &exercise);

    
    if (exercise == 1)
    {
        /*over flow*/
        printf("\n\nWIP this exercise test what happens during int overflow and float under and overflow\n\n");
        int short unsigned a = 0xffffffff;
        printf("integer unsigned = %lu\n", a);

    }
    return 0;
}
