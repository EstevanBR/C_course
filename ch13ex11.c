/*
Write a program that takes two command-line arguments.
The first is a string; the second is the name of a file.
The program should then search the file,
printing all lines containing the string.
Because this task is line oriented rather than character oriented,
use fgets() instead of getc().
Use the standard C library function strstr()
(briefly described in exercise 7 of Chapter 11) to search each line for the string.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	FILE *fp;
	char filename[256];
	strncpy(filename, argv[2], 256);
	char string[256];
	if (argc != 3)
	{
		printf("\007Only 2 arguments supported, \"no more, no less.\"\n");
		exit(0);
	}
	if ((fp = fopen(filename, "r")) == NULL)
	{
		printf("can't open file %s\n", argv[2]);
		exit(1);
	}
	while (fgets(string, 256, fp) != NULL)
	{
		if ((strstr(string, argv[1])) != NULL)
			fputs(string, stdout);
	}

	return 0;
}