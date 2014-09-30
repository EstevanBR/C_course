/*
chap11pro4.c
Design and test a function that searches the string specified by the first function parameter for the first occurrence of a character
specified by the second function parameter. Have the function return a pointer to the character if successful, and a null if
the character is not found in the string. (This duplicates the way that the library strchr() function works.)
Test the function in a complete program that uses a loop to provide input values for feeding to the function.
*/
#include <stdio.h>
char *strchrme(const char *source, const char ch);
int main(void)
{
	puts("Please enter a character to search for in string");
	char ch = getchar();;
	const char string[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char *point;

	point = strchrme(string, ch);

	if (point != NULL)
		printf("%c in string at %p is %c at position %p\n", ch, string, *point, point);
	else
		printf("%c is not in the string at %p\n", ch, string);

	return 0;
}
char *strchrme(const char * source, const char ch)
{
	int i;
	for(i = 0; source[i] != '\0'; i++)
	{
		if (source[i] == ch)
			return &source[i];
	}
	return NULL;
}