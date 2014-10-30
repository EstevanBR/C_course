/* not done
Write a program that opens a text file whose name is obtained interactively.
Set up a loop that asks the user to enter a file position.
The program then should print the part of the file starting at that position
and proceed to the next newline character.
Let nonnumeric input terminate the user-input loop.
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char file_name[256];
	int num;
	FILE *fp;
	char ch;

	puts("Please enter the file name");
	gets(file_name);

	if ((fp = fopen(file_name, "r")) == NULL)
	{
		printf("%s is not a valid file, sorry\n", file_name);
		exit(0);
	}
	printf("Please enter a number\n");

	while(scanf("%d", &num) > 0)
	{
		fseek(fp, num, SEEK_SET);
		while((ch = getc(fp)) != EOF)
		{
			if (ch != '\n')
			fputc(ch, stdout);
			//printf("waffle\n");
		}
		printf("\nPlease enter another number\n");
	}

	return 0;
}