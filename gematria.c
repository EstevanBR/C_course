/* gematria.c */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define ASCII 'A'+1
int main(void)
{
	char ch;
	int gema = 0;
	while(1)
	{
		gema = 0;
		printf("Enter a string to be encoded\n(example: A = 1, B = 2, therefore cat = 3 + 1 + 20 = 24\n");
		while(isalpha(ch = getchar()) || ch == ' ')
		{
			ch = toupper(ch);
			if (isalpha(ch))
				gema += ch - ASCII;
		}
		printf("\n%d\n", gema);
		if (gema == 0)
			exit(1);
	}
	return 0;
}