//
//  progex56.c
//  
//
//  Created by Estevan Hernandez on 5/9/14.
//
//

#include <stdio.h>
#include <float.h>
int main(void)
{
    double dbl = 1.0/3.0;
    float fl1 = 1.0/3.0;
    printf("%.4f %.12f %.16f %.32f\n", dbl, dbl, dbl, dbl);
    printf("%.4f %.12f %.16f %.32f\n", fl1, fl1, fl1, fl1);
    printf("FLT_DIG = %u\nDBL_DIG = %u\n", FLT_DIG, DBL_DIG);
    return 0;
}