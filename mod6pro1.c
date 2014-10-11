/*
1.	Write a program that sequentially displays on screen the contents of all of the files listed in the command line. Use argc to control a loop.
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	int ch;
	FILE *fp;
	for (i = 1; i < argc; i++)
	{
		fp = fopen(argv[i], "rb");
		while((ch = getc(fp)) != EOF)
			putc(ch, stdout);
		fclose(fp);
	}
	return 0;
}