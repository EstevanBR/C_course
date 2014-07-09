/*
2:	
Write a program that reads input as a stream of characters until encountering EOF.
Have the program print each input character and its ASCII decimal value.



Note that characters preceding the space character in the ASCII sequence are nonprinting characters.
Treat them specially. If the nonprinting character is a newline or tab, print \n or \t, respectively.
Otherwise, use control-character notation.
For instance, ASCII 1 is Ctrl+A, which can be displayed as ^A.
Note that the ASCII value for A is the value for Ctrl+A plus 64. A similar relation holds for the other nonprinting characters.
Print 10 pairs per line, except start a fresh line each time a newline character is encountered.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(void)
{
	int ch;
	int line = 1;
	bool taborline;
	char Space[6] = "Space", TAB[6] = "\\t", NL[6] = "\\n";

	while ((ch = getchar()) != EOF)
	{
		line++;
		taborline = (ch == '\t' || ch == '\n' || ch == ' ');

		printf("%5c%c", ((taborline || ch >= 32) ? ' ' : '^'), ((ch <= 31) ? (ch+64) : (ch)));
		if (taborline == true){
			printf("\b\b\b\b\b\b");
			switch(ch){
				case '\t':
					printf("%6s", TAB);
					break;
				case ' ':
					printf("%6s", Space);
					break;
				case '\n':
					printf("%6s", NL);
					break;
			}
		}
		printf(" = %3d%6c", ch, '|');
		if (ch == '\n')
			line = 0;

		if (line % 10 == 0){
			printf("\n");
			printf("|");
		}
	}
	printf("\n\n");
	return 0;
}
