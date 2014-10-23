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
#define BUFSIZE 1024
#define SLEN 81
int main(void)
{
	/* code */
	FILE *fs, *fd;
	long count, last;
	size_t bytes;
	static char temp[BUFSIZE]; // allocate once

	int ch;         // place to store each character as read
    FILE *fp;       // "file pointer"
    long count = 0;
    char fname_s[256];
    char fname_d[256];

    printf("Please enter the file name to use as a source:\n");
    fgets(fname_s, 256, stdin);
    fname_s[strlen(fname_s)-1] = '\0';
    if ((fp = fopen(fname_s, "r")) == NULL)
    {
        printf("Can't open %s\n", fname_s);
        exit(1);
    }
    printf("Please enter the file name to use as a source:\n");
    fgets(fname_d, 256, stdin);
    fname_d[strlen(fname_d)-1] = '\0';
    if ((fp = fopen(fname_d, "w")) == NULL)
    {
        printf("Can't open %s\n", fname_d);
        exit(1);
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