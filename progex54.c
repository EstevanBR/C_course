//
//  progex54.c
//  
//
//  Created by Estevan Hernandez on 5/9/14.
//
//

#include <stdio.h>
#include <string.h>
int main(void)
{
    char first[40];
    float inches;
    
    printf("Hello, please enter your first name only and press [ENTER]\n");
    scanf("%s", first);
    printf("Nice to meet you %s, would you please enter your heigh in inches, and then press [ENTER]?\n", first);
    scanf("%f", &inches);
    printf("\nThank you for your cooperation,\n%s, you are %.1f feet tall\n\n", first, inches / 12);
    return 0;
}