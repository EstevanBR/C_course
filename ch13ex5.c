//Modify the program in Listing 13.6 so that it uses a command-line interface instead of an interactive interface.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 1024
#define SLEN 81
void append(FILE * source, FILE * dest);
int main(int argc, char *argv[])
{
	int files = 0;
	int i;
	FILE *fa, *fs;			//fa for append file, fs for source file
	if (argc < 2)
	{
		printf("whoops, not enough command line arguments (need 2 files)\n");
		exit(2);
	}

	//puts("Enter name of destination file:");
	if ((fa = fopen(argv[1], "a")) == NULL) //if can't open the file with name stored in argv[1]
	{
		fprintf(stderr, "Can't open %s\n", argv[1]); //throw error
		exit(2);
	}
	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0) //creates a new buffer for output of FILE fa
	{
		fputs("Can't create output buffer\n", stderr); //if creating the buffer fails, throws an error
		exit(3);
	}
	//puts("Enter name of first source file (empty line to quit):");
	for(i = 2; i < argc; i++)
	{
		if (strcmp(argv[i], argv[1]) == 0) // if files are the same
			fputs("Can't create output buffer\n", stderr);
		
		else if ((fs = fopen(argv[i], "r")) == NULL) //if can't open file (for instance it is locked)
			fprintf(stderr, "Can't open %s\n", argv[i]);
		else
		{
			if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0) //creates a new buffer for input of file fs (source)
			{
				fputs("Can't create input buffer\n", stderr); //throws error 
				continue;
			}
			append(fs,fa);
			if (ferror(fs) != 0)	//returns non zero if read/write error occured with fs 
			// if (feof(fs) == 0) //should be the same as above..
				fprintf(stderr, "Error in reading file %s\n", //if error occrued
					argv[i]);
			if (ferror(fa) != 0)	//returns non zero if read/write error occured with fa
				fprintf(stderr, "Error in reading files %s\n",
					argv[1]);
			fclose(fs);				//closes source file
			files++;				//increments file count
			printf("file %s appended.\n", argv[i]);
			//puts("Next file (empty line to quit):");
		}
	}
	printf("Done. %d files appended.\n", files);
	fclose(fa); //closes file being appended

	return 0;
}

void append(FILE * source, FILE * dest)
{
	size_t bytes;
	static char temp[BUFSIZE]; // allocate once
	while((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0) //while fread has read at least 1 file
		fwrite(temp, sizeof (char), bytes, dest); //write the data from the source file to the file being apended
}