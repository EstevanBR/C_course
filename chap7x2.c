/*Write a program that reads input
until encountering #. Have the
program print each input
character and its ASCII decimal
code. Print eight character-code
pairs per line. Suggestion: Use
a character count and the
modulus operator (%) to print a
newline character for every
eight cycles of the loop.*/

#include <stdio.h>
int main(void)
{
	char ch;
	int count;

	while ((ch = getchar()) != '#')
	{
		count++;
		if (count % 8 == 0)
			printf("\n");
		printf("%4c %4d ", ch, (int) ch);
	}
	return 0;
}