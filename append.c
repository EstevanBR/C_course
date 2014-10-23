#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 1024
#define SLEN 81
void append(FILE * source, FILE * dest);
int main(void)
{
	FILE *fa, *fs;			//fa for append file, fs for source file
	int files = 0;
	char file_app[SLEN]; 	//this is the string to be used to store the name of the destination file
	char file_src[SLEN]; 	//this is the string to be used to store the name of the source file/s
	puts("Enter name of destination file:");
	gets(file_app); 		//gets the string/file name
	if ((fa = fopen(file_app, "a")) == NULL) //if can't open the file with name stored in file_app
	{
		fprintf(stderr, "Can't open %s\n", file_app); //throw error
		exit(2);
	}
	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0) //creates a new buffer for output of FILE fa
	{
		fputs("Can't create output buffer\n", stderr); //if creating the buffer fails, throws an error
		exit(3);
	}
	puts("Enter name of first source file (empty line to quit):");
	while (gets(file_src) && file_src[0] != '\0')
	{
		if (strcmp(file_src, file_app) == 0) // if files are the same
			fputs("Can't create output buffer\n", stderr);
		else if ((fs = fopen(file_src, "r")) == NULL) //if can't open file (for instance it is locked)
			fprintf(stderr, "Can't open %s\n", file_src);
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
					file_src);
			if (ferror(fa) != 0)	//returns non zero if read/write error occured with fa
				fprintf(stderr, "Error in reading files %s\n",
					file_app);
			fclose(fs);				//closes source file
			files++;				//increments file count
			printf("file %s appended.\n", file_src);
			puts("Next file (empty line to quit):");
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