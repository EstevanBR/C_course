/************************************************
 * filename: age2days.c
 * Exercise: Module 1, Programming Assignment 1
 * Name: Estevan Hernandez
 * Date Created: May 2, 2014
 *
 * Description: This program calculates approx. how many days you have been alive
 *************************************************/

#include <stdio.h>

int main(void)
{
    int age = 21;
    int days = age * 356;
    
    printf("\n\nI am %d years old which is also %d days old!\n\n", age, days);
    return 0;
}
