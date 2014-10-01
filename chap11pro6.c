/*
chap11pro6.c
The strncpy(target,source,n) function copies exactly n characters from source to target, truncating source or padding it with extra null characters as necessary.
The target string may not be null-terminated if the length of source is n or more. The function returns target. Write your own version of this function.
Test the function in a complete program that uses a loop to provide input values for feeding to the function.
*/
#include <stdio.h>
#include <string.h>
char* strncpy2(char* target, const char* source, const int targetlength);
int main(void)
{
	char source[] = {"estevan hernandez BRO BRO"};
	int sourcelength = strlen(source);
	int targetlength = sourcelength-13;
	int i;
	char target[targetlength];

	printf("here are the two strings target:\n%s\nand source:\n%s\n", strncpy2(target, source, targetlength), source);

	return 0;

}

char* strncpy2(char* target, const char* source, const int targetlength)
{
	int i;
	int sourcelength = strlen(source);
	if (targetlength<1)
	{
		puts("please don't enter 0 as the third argument....");
		return target;
	}

	for(i = 0; i < targetlength; i++)
	{
		target[i] = '\0';
	}

	for(i = 0; i < targetlength && i < sourcelength; i++)
	{
		target[i] = source[i];
	}

	
	return target;
}