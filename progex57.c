//
//  progex57.c
//  
//
//  Created by Estevan Hernandez on 5/9/14.
//
//

#include <stdio.h>
#define LITERSGAL 3.785
#define KILOMILE 1.609
int main(void)
{
    float miles;
    float fuel;
    
    printf("\nPlease enter miles traveled and gallons of fuel consumed\nmiles:");
    scanf("%f", &miles);
    printf("\nNow please enter amount of gallons consumed:\n");
    scanf("%f", &fuel);
    float MPG;
    printf("\nYour MPG(miles per gallon) so far is: %f miles per gallon\n", miles/fuel);
    printf("Your kilometers per liter so far is:  %f kilometers per liter\n\n", (miles * KILOMILE)/(fuel * LITERSGAL));
    
    return 0;
}