/************************************************
 * filename: tenopera.c
 * Exercise: Module 1, Programming Assignment 2
 * Name: Estevan Hernandez
 * Date Created: May 2, 2014
 *
 * Description: This program displays the results of different performed on an initial value of 10, the operations are performed inside of the printf() function.
 *************************************************/

#include <stdio.h>

int main(void)
{
    int number = 10;
    
    printf("\n%d times 2 = %d\n%d divided by 2 = %d\n%d plus 2 = %d\n%d minus 2 = %d\n%d squared = %d\n\n", number, number * 2, number, number / 2, number, number + 2, number, number - 2, number, number * number);/* this prints number and performs various operations on number and prints the resulting values*/
    return 0;
}
