/*
Write a file-copy program that takes the original filename
and the copy file from the command line. Use standard I/O and
the binary mode, if possible.
*/
#include <stdio.h>
#include <stdlib.h>
#define BUFSIZE 1024
#define SLEN 81
int main(int argc, char const *argv[])
{
	/* code */
	FILE *fs, *fd;
	long count, last;
	size_t bytes;
	static char temp[BUFSIZE]; // allocate once

	int ch;


	if(argc != 3)
	{
		puts("I need 2 arguments");
		exit(0);
	}

	if((fs = fopen(argv[1], "rb")) == NULL)
	{
		printf("could not open source file %s\n", argv[1]);
	}
	if((fd = fopen(argv[2], "wb")) == NULL)
	{
		printf("could not open target file %s\n", argv[2]);
	}

	fseek(fs, 0L, SEEK_END);
	last = ftell(fs);
	fseek(fs, 0L, SEEK_SET);
	
	/*
	for (count = 1L; count <= last; count++)
	{
		fseek(fs, +count, SEEK_SET);
			ch = getc(fs);

	}
	*/

	while((bytes = fread(temp, sizeof(char), BUFSIZE, fs)) > 0) //while fread has read at least 1 file
		fwrite(temp, sizeof (char), bytes, fd); //write the data from the source file to the file being apended

	return 0;
}