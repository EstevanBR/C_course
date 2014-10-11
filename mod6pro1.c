/************************************************
    * filename: mod6pro1.c
    * Assignment: Module 6, Programming Assignnment 1
    * Name: Estevan Hernandez
    * Date Created: October 11, 2014
    *
    * Description: Write a program that sequentially
    * displays on screen the contents of all of the
    * files listed in the command line. Use argc to
    * control a loop.
    *************************************************/
#include <stdio.h>
int main(int argc, char const *argv[]) /* for command line arguments */
{
	int i;
	int ch;
	FILE *fp; /*file pointer*/
	for (i = 1; i < argc; i++) /* because argv[0] would be the file name, we start at i = 1,
	using argc as a test expression so that we don't try to read a file that's not even there*/
	{
		fp = fopen(argv[i], "r"); /* opens file pointed to by fp in text mode, replace "r" with "rb" for binary mode */
		while((ch = getc(fp)) != EOF) /* while getc has not reached the end of the file pointed to by fp*/
			putc(ch, stdout); /* output character obtained by getc to the stdout, in this case the screen*/
		fclose(fp); /* close the file */
		putc('\n', stdout); /* I noticed that because some files do not end with a newline, the last line of one file
		and the first line of the file after it can appear on the same line during output which looks funny,
		but to be 100% loyal to the program description, this line could be commented out. I just think
		it looks neater. :) */
	}
	return 0;
}