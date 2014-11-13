//replaces exclamation marks with spaces
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int ch;
	while((ch = getchar()) != EOF)
	{
		if (ch == '!')
			ch = ' ';
		putchar(ch);
	}
	return 0;
}