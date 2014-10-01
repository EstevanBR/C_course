/*
chap11pro8.c
Write a function that replaces the contents of a string with the string reversed.
Test the function in a complete program that uses a loop to provide input values for feeding to the function.
*/
#include <stdio.h>
#include <string.h>
void reversen(char* string);
int main(void)
{
	char string[100];

	printf("type some text and press enter,\nI will reverse the text you enter. press ENTER without typing text and the program will close.\n");

	while(1){
		//printf("\nPlease enter a string\n");
		//gets(string);
		scanf("%99s", string);

		if (string[0] == '\0')
			break;
		reversen(string);
		printf("%s\n", string);

	}
	printf("Done.\n");

	return 0;
}

void reversen(char* string)
{
	int i;
	int n = strlen(string);
	char string2[n];

	for(i = 0; i < n; i++)
	{
		string2[n-i-1] = string[i];
	}
	string2[n] = '\0';
	strcpy(string, string2);
}