/*chap11pro7.c
Write a function called string_in() that takes two string pointers as arguments.
If the second string is contained in the first string, have the function return the address at which the contained string begins.
For instance, string_in("hats", "at") would return the address of the a in hats.
Otherwise, have the function return the null pointer.
Test the function in a complete program that uses a loop to provide input values for feeding to the function.
*/
#include <stdio.h>
#include <string.h>
char *string_in(char* bigspoon, char* littlespoon);
int main(void)
{
	char big[] = {"welcome to the krusty krab, we hope you have a great time."};
	char little[] = {"hope"};
	char *letter = string_in(big, little);

	if (letter != NULL)
		printf("%*s\nis in\n"
			   "%s\n"
			   "%*c\n", letter - big + 1, little, big, letter - big + 1, '^');

	return 0;
}

char *string_in(char* bigspoon, char* littlespoon)
{
	int i = 0;
	int j = 0;
	char* point = NULL;
	while(i++ < strlen(littlespoon))
	{
		while(j++ < strlen(bigspoon))
		{
			if (littlespoon[0] == bigspoon[j])
			{
				point = &bigspoon[j];
				return point;
			}
		}
	}

	return point;
}