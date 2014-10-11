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
	printf("This program outputs the contents of files.\n"
		"There are special markers for START/END of each file, indicated by double asteriks '**' and a special message\n");
	if (argc == 1)
	{
		printf("\007!!ERROR!!\nYou need to include file names in the command line when executing this program!\n");
		printf("This program outputs the contents of files, if you don't give me any files to output, my existence is meaningless!\n");
		printf("!!END!!\n");
	}
	for (i = 1; i < argc; i++) /* because argv[0] would be the file name, we start at i = 1,
	using argc as a test expression so that we don't try to read a file that's not even there*/
	{
		fp = fopen(argv[i], "r"); /* opens file pointed to by fp in text mode, replace "r" with "rb" for binary mode */
		printf("\n**START OF FILE %d NAMED \"%s\"**\n", i, argv[i]);
		while((ch = getc(fp)) != EOF) /* while getc has not reached the end of the file pointed to by fp*/
			putc(ch, stdout); /* output character obtained by getc to the stdout, in this case the screen*/
		fclose(fp); /* close the file */
		printf("**END OF FILE %d NAMED \"%s\"**\n", i, argv[i]);
		/* line 28 and 32 of the source code were put in to make it clear to the user when each file starts and stops
		I did this because I notcied during testing that not all files end with a new line, so sometimes the last line
		of the one file and the first line of another file can appear on the same line. */
	}
	return 0;
}