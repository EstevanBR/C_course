/*chap11pro7.c
Write a function called string_in() that takes two string pointers as arguments.
If the second string is contained in the first string, have the function return the address at which the contained string begins.
For instance, string_in("hats", "at") would return the address of the a in hats.
Otherwise, have the function return the null pointer.
Test the function in a complete program that uses a loop to provide input values for feeding to the function.
*/
#include <stdio.h>
#include <string.h>
char *string_in (const char *haystack, const char *needle);
int main(void)
{
	char big[100];
	char little[100];
	char *letter;

	do
	{
		printf("please enter a string [or just press enter without typing anything to exit.\n");
		gets(big);
		if(big[0] == '\0')
		{
			break;
		}
		printf("now enter a smaller string [or just press enter without typing anything to exit.\n");
		gets(little);
		if(little[0] == '\0')
		{
			break;
		}

		letter = string_in(big, little);

		if (letter != NULL)
			printf("\"%s\"\nis in\n\"%s\"\nstarting at\n\"%s\"\n", little, big, letter);
	}while(1);

	printf("Done\n");


	return 0;
}

char *string_in (const char *haystack, const char *needle)//can use strlen, strncmp
{
	char* point = (char *) haystack;
	int n = strlen(needle);

	while((point = strchr(point, *needle)) != 0) //while character is in first position of string
	{
		if (strncmp(point, needle, n) == 0)
			return point;
		point++;
	}
	return NULL;
}

/*
char *string_in (const char *haystack, const char *needle)//can use strlen, strncmp
{
	char *point = (char*) haystack;
	int len = strlen(needle);

	while((point = strchr (point, *needle)) != 0)//loop is terminted when strchr = 0 or character is found in string
		{
			if (strncmp (point, needle, len) == 0)
				return point;
			point++;
		}

	return NULL;
}
*/