/*
Write a program that sequentially displays onscreen all the files listed in the command line. Use argc to control a loop.
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int i;
	for (i = 1; i < argc; i++)
	{	
		if ((fopen(argv[i], "r")) != NULL)
			printf("%s\n", argv[i]);
		else
			putc('\007', stdout);
	}
	return 0;
}