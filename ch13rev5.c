/*
Write a program that takes two command-line arguments.
The first is a character, and the second is a filename.
The program should print only those lines in the file containing the given character.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	/* code */
	char ch = (char) argv[1][0];
	char string[256];
	FILE *fp = fopen(argv[2], "r");

	while((fgets(string, 256, fp)) != NULL)
	{
		if (strchr(string, ch))
			fputs(string, stdout);
	}
	puts("\n");

	return 0;
}