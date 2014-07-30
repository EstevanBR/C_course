/*loopx.c*/
//turns vowels into x
//turns a to A
//remove spaces
//prints lines
#include <stdio.h>
#include <ctype.h>
#define CHARPERROW 17
int vowel2x(int ch);
int nospace(int ch);
int main(void)
{
	int i;
	int * ptr;
	int ch;
	for (i = 1; (ch = getchar()) != EOF; i++)
	{
		ch = toupper(ch);
		ch = vowel2x(ch);
		putchar(ch);
		putchar(' ');
		if (i % CHARPERROW == 0)
			putchar('\n');
	}

	return 0;

}
int vowel2x(int ch)
{
	if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y')
	{
		ch = 'X';
	}
	return ch;
}

int nospace(int ch)
{
	if (ch == ' ' || ispunct(ch))
	{
		ch = '\b';
	}
	return ch;
}