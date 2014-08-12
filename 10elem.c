#include<stdio.h>
int  sum( int x[], int n );
int main(void)
{
   int x[10] = {1,1,1,1,1,1,1,1,1,1};
   int sum_total;

   sum_total = sum(x, 10);  // Passes address of x[0].
   printf("Sum of the array elements = %d  \n", sum_total);

   return 0;
}

int sum( int  x[], int n )
{
   int i, total = 0;
   for( i=0; i<n; i++)  /* loop through entire array */
   total += x[i];       /* add each element to total */

   return total;

}
