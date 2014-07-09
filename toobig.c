//
//  toobig.c
//  
//
//  Created by Estevan Hernandez on 5/6/14.
//
//

#include <stdio.h>
int main(void)
{
    int i = 2147483647;
    unsigned int j = 4294967295;
    
    printf("%f %f %f\n", i, i+1, i+2);
    printf("%f %f %f\n", j, j+1, j+2);
    
    return 0;
}
