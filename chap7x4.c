/*
chap7x4.c
Using if else statements, write a program that reads input up to
#, replaces each period with an exclamation mark, replaces each
exclamation mark initially present with two exclamation marks,
and reports at the end the number of substitutions it has made.
*/

#include <stdio.h>
int main(void)
{
	char ch;
	int subs = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == '!')
		{	
			putchar(ch);
			putchar(ch);
			subs += 2;
		}else if (ch == '.')
		{
			putchar('!');
			subs++;
		}else{
			putchar(ch);
		}
	}
	printf("\n%d substitutions made\n", subs);

	return 0;
}