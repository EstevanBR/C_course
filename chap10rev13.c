/*13:	
Here are two function prototypes:

void show(double ar[], int n);   // n is number of elements

void show2(double ar2[][3], int n);  // n is number of rows


Show a function call that passes a compound literal containing the values 8, 3, 9,and 2 to the
show() function.

Show a function call that passes a compound literal containing the values 8, 3, and 9 as the
first row and the values 5, 4, and 1 as the second row to the show2() function.
*/
#include <stdio.h>
void show(double ar[], int n);
void show2(double ar[][3], int n);
int main(void)
{
	const int i = 4, j = 3;

	show((int [4]){8,3,9,2}, 4);
	show2((int [][3]){{8,3,9},{5,4,1}}, 2);

	return 0;
}
void show(double ar[], int n)
{
	int r;
	for(r = 0; r < n; r++)
		printf("%f\n", ar[n]);
}

void show2(double ar[][3], int n)
{

}