//
//  cawm.c
//  
//
//  Created by Estevan Hernandez on 5/6/14.
//
//

#include <stdio.h>
int main(void)
{
    float g, h, tax, rate;
    g = 1e21;
    rate = -1.52;
    tax = rate * g;
    
    printf("tax = %4.f\nrate = %4.f\n", tax, rate);
    
    return 0;
}