//1:	
//Which storage classes create variables local to the function containing them?

//automatic, internal linkage, block scope

//2:
//Which storage classes create variables that persist for the duration of the containing program?

//any class that has static duration

//3:	
//Which storage class creates variables that can be used across several files? Restricted to just one file?

//file scope, using extern to define them

//4:	
//What kind of linkage do block scope variables have?

//internal

//5:	
//What is the extern keyword used for?

//to reference a variable that has been declared in another file.

//6:	
//Consider this code fragment:

int * p1 = (int *) malloc(100 * sizeof(int));

//In terms of the final outcome, how does the following statement differ?

int * p1 = (int *) calloc(100, sizeof(int));

//malloc and calloc differ because calloc initializes all the memory to 0. much like initializing a string.

//7:	
//Which functions know each variable in the following? Are there any errors?

/* file 1 */
int daisy;
int main(void)
{
  int lily;
}
int petal()
{
  extern int daisy, lily;
}

/* file 2 */
extern int daisy;
static int lily;
int rose;
int stem()
{
  int rose;
}
void root()
{
}

//daisy in file #1 has file scope so it is visible to both files and all functions in them.
//however the fucntion petal() has declared its own version of daisy. which actually isn't a valid decleration.
//lily is automatic/block scope in main, so it is not visible to petal()
//

//8:
//What will the following program print?


#include <stdio.h>
char color= 'B';
void first(void);
void second(void);

int main(void)
{
  extern char color;

  printf("color in main() is %c\n", color);
  first();
  printf("color in main() is %c\n", color);
  second();
  printf("color in main() is %c\n", color);
  return 0;
}

void first(void)
{
  char color;

  color = 'R';
  printf("color in first() is %c\n", color);
}

void second(void)
{
  color = 'G';
  printf("color in second() is %c\n", color);
}

//9:
//A file begins with the following declarations:


static int plink;
int value_ct(const int arr[], int value, int n);

//What do these declarations tell you about the programmer's intent?
//Will replacing int value and int n with const int value and const int n enhance the protection of values in the calling program?