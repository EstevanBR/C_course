/*Modify and test the function in exercise 1 so
that it stops after n characters or after the
first blank, tab, or newline, whichever comes first.
(Don't just use scanf().)

Design and test a function that fetches the next n
characters from input (including blanks, tabs, and
newlines), storing the results in an array whose
address is passed as an argument.*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
char *fetch(const int n, char array[n]);
int main(void)
{
	int i;
	int imax;

	printf("Please enter how many characters you are doing to type: ");
	scanf("%d", &imax);
	puts("Thank you very much");

	char array[imax];
	char* first = fetch(imax, array);

	putchar('\"');
	for(i = 0; i < imax; i++)
		putchar(array[i]);
	putchar('\"');

	printf("\nthe address is %p\n", first);

	return 0;
}
char *fetch(const int n, char array[n])
{
	int i;
	for(i = 0; i < n; i++)
	{
		array[i] = getchar();
		//printf("%d\n", i);
	}

	return array;
}