/*chap6x13.c*/
#include <stdio.h>
int main(void)
{
	double first[7], second[7];
	int i;
	
	printf("please enter 8 numbers with a fractional part\n");
	for (i=0 ; i<=7 ; i++)
	{
		scanf("%le", &first[i]);
		second[i] = first[i];
		second[i] = first[i] + second[i-1];
		printf("%d index of first array....:%7.2f\n       -of second array...:%7.2f\n", i+1, first[i], second[i]);
	}
	return 0;
}

/* Write a program that creates two eight-element arrays of doubles and uses a loop to
let the user enter values for the eight elements of the first array. Have the program
set the elements of the second array to the cumulative totals of the elements of the
first array. For example, the fourth element of the second array should equal the sum
of the first four elements of the first array, and the fifth element of the second
array should equal the sum of the first five elements of the first array. (It's
possible to do this with nested loops, but by using the fact that the fifth element of
the second array equals the fourth element of the second array plus the fifth element
of the first array, you can avoid nesting and just use a single loop for this task.)
Finally, use loops to display the contents of the two arrays, with the first array
displayed on one line and with each element of the second array displayed below the
corresponding element of the first array. */