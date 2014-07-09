//
//  floats.c
//  
//
//  Created by Estevan Hernandez on 5/8/14.
//
//

#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99; //const-style constant
    
    printf("\n\n*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3e*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n\n\n", RENT);
    
    return 0;
}
