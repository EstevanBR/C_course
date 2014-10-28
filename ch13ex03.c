/*
INCOMPLETE - WIP
Write a file copy program that prompts the user to enter
the name of a text file to act as the source file and
the name of an output file.
The program should use the toupper() function from ctype.h
to convert all text to uppercase as it's written to
the output file. Use standard I/O and the text mode.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define BUFSIZE 1024
#define SLEN 81
int main(void)
{
	/* code */
	FILE *fs, *fd;
	long count = 0, last;
	size_t bytes;
	static char temp[BUFSIZE]; // allocate once

	int ch;         // place to store each character as read
    char fname_s[256];
    char fname_d[256];

    printf("Please enter the file name to use as a source:\n");
    fgets(fname_s, 256, stdin);
    fname_s[strlen(fname_s)-1] = '\0';
    if ((fs = fopen(fname_s, "r")) == NULL)
    {
        printf("Can't open %s\n", fname_s);
        exit(1);
    }
    printf("Please enter the file name to use as a target:\n");
    fgets(fname_d, 256, stdin);
    fname_d[strlen(fname_d)-1] = '\0';
    if ((fd = fopen(fname_d, "w")) == NULL)
    {
        printf("Can't open %s\n", fname_d);
        exit(1);
    }

	fseek(fs, 0L, SEEK_END);
	last = ftell(fs);
	fseek(fs, 0L, SEEK_SET);
	
	for (count = 1L; count <= last;)
	{
		fseek(fs, +count, SEEK_SET-1L);
			ch = getc(fs);
			ch = toupper(ch);
		fseek(fd, +count, SEEK_SET-1L);
			putc(ch, fd);
		count++;
	}
	fclose(fs);
	fclose(fd);

	//while((bytes = fread(temp, sizeof(char), BUFSIZE, fs)) > 0) //while fread has read at least 1 file
	//	fwrite(temp, sizeof (char), bytes, fd); //write the data from the source file to the target file

	return 0;
}