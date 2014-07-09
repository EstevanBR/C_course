/*chap7x1.c
~write a program that reads input until the # character and
counts characters, new lines, spaces, and all other characters~*/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int spaces = 0;
	int newlines = 0;
	int characters = 0;
	int other = 0;

	while ((ch = getchar()) != '#')
		switch(ch)
		{
			case ' ': spaces++;
			break;
			case '\n': newlines++;
			break;
			default: (isalpha(ch)) ? characters++: other++;
		}

	printf("%d spaces %d newlines %d alphabetical characters %d non alpha characters\n",
		spaces, newlines, characters, other);
	return 0;


}
																