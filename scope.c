#include <stdio.h>
int b = 0;   /* global  variable - not recommended for most applications */
void scope_test(void);
int main(void)
{
   int a = 1;

   printf("a=%d  b=%d\n",a,b);  /* Outputs: a=1  b=0  */
   b = 2;   /* change value of  global variable */
   printf("a=%d  b=%d\n",a,b);  /* Outputs: a=1  b=2  */
 
   scope_test();
   printf("a=%d  b=%d\n",a,b);  /* Outputs: a=1  b=4  */

   return 0;
 }

/* function to demonstrate  variable scope */
void scope_test(void)
{
  int a = 3;
  b = 4;
  printf("a=%d   b=%d\n",a,b);  /* Outputs:  a=3  b=4 */
}