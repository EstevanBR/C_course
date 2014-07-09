//
//  floatcnv.c
//  
//
//  Created by Estevan Hernandez on 5/9/14.
//
//

#include <stdio.h>
int main(void)
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;
    
    printf("n1 = %.1e n2 = %.1e n3 = %.1e n4 = %.1e\n", n1, n2, n3, n4);
    printf("n3 = %ld n4 = %ld\n", n3, n4);
    printf("n1 = %ld n2 = %ld n3 = %ld n4 = %ld\n", n1, n2, n3, n4);
    
    return 0;
}