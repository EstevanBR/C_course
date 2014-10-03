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
	char c = ' ';
	char* write;
	char* read = write = string;
	while(*read)//perform the following code until read is pointing at a NULL element
	{
		*write = *read++; //set write to be the same as read, first loop through they both point to the first element.
		write += (*write != c); //write pointer is incremented by 1 only if write is not a space 
	}
	*write = '\0';
}
/*
void spacedestroyer(char string[])
{
	char c = ' ';
	char* read;
	char* write = read = string;
	while(*read){
		*write = *read++;
		write += (*write != c);
	}
	*write = '\0';
}
*/