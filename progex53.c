//
//  progex53.c
//  
//
//  Created by Estevan Hernandez on 5/9/14.
//
//

#include <stdio.h>
int main(void)
{
    float twenty;
    
    printf("Please enter a floating point number (a number with a fractional part), thank you!\n");
    scanf("%f", &twenty);
    printf("\nHere is your number in decimal and exponential formats\ndecimal = %.2f\nexponential = %.2e\n\n", twenty, twenty);
    
    return 0;
}