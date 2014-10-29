/*
Write a program that takes as command-line arguments a character and zero or more filenames. - DONE
If no arguments follow the character, have the program read the standard input. - DONE
Otherwise, have it open each file in turn and report how many times the character appears in each file. - DONE
The filename and the character itself should be reported along with the count. - DONE
Include error-checking to see whether the number of arguments is correct and whether the files can be opened. - DONE
If a file can't be opened, have the program report that fact and go on to the next file. - DONE
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	char com_ch;//command line character
	char ch;
	int i;
	FILE *fs;
	int count;
	if (argc == 1)
	{
		printf("Need at least 1 character argument\n");
		exit(2);
	}
	com_ch = argv[1][0];

	if (argc > 2)
	{
		for (i = 2; i < argc; i++)
		{
			if ((fs = fopen(argv[i], "r")) == NULL)
			{
				printf("\007Uh oh, could not open \"%s\"\n", argv[i]);
				break;
			}
			printf("working on file %s looking for char %c\n", argv[i], com_ch);
			count = 0;
			while((ch = fgetc(fs)) != EOF)
			{
				if (ch == com_ch)
					count++;
			}
			printf("\nThere are %d instances of %c in %s\n", count, com_ch, argv[i]);
			fclose(fs);
		}
	}
	if (argc == 2)
	{
		count = 0;
		while((ch = getchar()) != EOF)
		{
			if (ch == com_ch)
				count++;
		}
		printf("There were %d instances of %c\n", count, com_ch);
	}
	return 0;
}