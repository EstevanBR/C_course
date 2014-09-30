/*
chap11pro3.c
Design and test a function that reads the first word from a line of input into an
array and discards the rest of the line. Define a word as a sequence of characters
with no blanks, tabs, or newlines in it.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char* oneword(void);
int main(void)
{
	char *word = oneword();

	printf("\"%s\"", word);

	return 0;
}
char* oneword(void)
{
	char source[100];
	int ch;
	int i;
	for(i = 0; i < 100; i++)
	{
		ch = getchar();
		if (isspace(ch) == 0)
			source[i] = ch;
		else{
			source[i] = '\0';
			char target[i];
			strcpy(target, source);
			return target;
		}
			
	}
	return NULL;

}