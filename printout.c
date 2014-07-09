//
//  printout.c
//  
//
//  Created by Estevan Hernandez on 5/8/14.
//
//

#include <stdio.h>
#define PI 3.141593
int main(void)
{
    int number = 5;
    float espresso = 13.5;
    int cost = 3100;
    
    printf("\nThe %d CEOs drank %.1f cups of espresso.\n", number, espresso);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou are too dear for my possessing,\n");
    printf("%c%d\n\n", '$', 2*cost);
    
    return 0;
}
