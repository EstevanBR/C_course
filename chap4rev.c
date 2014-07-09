//
//  chap4rev.c
//  
//
//  Created by Estevan Hernandez on 5/9/14.
//
//

/*#include <stdio.h>
#include <string.h>
#define Q "His Hamlet was funny without being vulgar."

int main(void)
{
    printf("He sold the painting for %2.2f.\n\n", 2.345e2);
    printf("%c%c%c\n\n", 'H', 105, '\41');
    printf("\"%s\"\nhas %d characters.\n\n", Q, strlen(Q));
    printf("Is %2.2e the same as %2.2f?\n\n", 1201.0, 1201.0);
    
    return 0;
}*/

/*#include <stdio.h>
#define B "booboo"
#define X 10
int main(void)
{
    int age, xp;
    char name[10];
    
    printf("Please enter your first name.\n__________\b\b\b\b\b\b\b\b\b\b");
    scanf("%s", name);
    printf("All right, %s, what's your age?\n__\b\b", name);
    scanf("%d", &age);
    xp = age + X;
    printf("Thats a %s! you must be at least %d.\n", B, xp);
    
    return 0;
}*/

#include <stdio.h>
#define BOOK "War and Peace"
int main(void)
{
    float cost = 12.99;
    float percent = 80.0;
    
    printf("\nThis copy of \"%s\" sells for %.2f.\nThat is %%%.0f of list\n\n", BOOK, cost, percent);
    
    return 0;
}
