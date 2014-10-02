/*
chap11pro9.c
Write a function that takes a string as an argument and removes the spaces from the string.
Test it in a program that uses a loop to read lines until you enter an empty line.
The program should apply the function to each input string and display the result.
*/

#include <stdio.h>
#include <string.h>
void spacedestroyer(char string[]);
int main(void)
{
	char string[100];
	while(1){
		//printf("\nPlease enter a string\n");
		//gets(string);
		gets(string);

		if (string[0] == '\0')
			break;
		spacedestroyer(string);
		printf("%s\n", string);

	}
	printf("Done.\n");
}
void spacedestroyer(char string[])
{
}