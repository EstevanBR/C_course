/* not done
Write a program that opens a text file whose name is obtained interactively.
Set up a loop that asks the user to enter a file position.
The program then should print the part of the file starting at that position
and proceed to the next newline character.
Let nonnumeric input terminate the user-input loop.
*/
#include <stdio.h>
int main(void)
{
	char file_name[256];
	int num;
	fputs(stdout, "please enter the file name");
	fgets(stdin, 256, file_name);
	if (fopen(file_name, "r") == NULL)
	{
		printf("%s is not a valid file, sorry\n", file_name);
		exit(0);
	}
	printf("Please enter a number\n");
	while(scanf("%d", num) > 0)
	{

	}

	return 0;
}