/*
Create a text file consisting of 20 rows of 30 integers. The integers should be in the range 0–9 and be separated by spaces.
The file is a digital representation of a picture, with the values 0 through 9 representing increasing levels of darkness.
Write a program that reads the contents of the file into a 20-by-30 array of ints.
In a crude approach toward converting this digital representation to a picture,
have the program use the values in this array to initialize a 20-by-31 array of chars,
with a 0 value corresponding to a space character, a 1 value to the period character,
and so on, with each larger number represented by a character that occupies more space.
For example, you might use # to represent 9.
The last character (the 31st) in each row should be a null character,
making it an array of 20 strings.
Have the program display the resulting picture (that is, print the strings) and also store the result in a text file.
For example, suppose you start with this data:
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int numbers[20][30];
	char letters[20][31];
	char buffer[31];
	int temp;
	int ch;
	int i;
	int j;
	FILE *fp, *fp2;
	fp = fopen("grid.txt", "r");
	fp2 = fopen("grid.out.txt", "w");
	for (i = 0; i < 20*30; i++)
	{
		fscanf(fp, "%i", &temp);

		fprintf(fp2, "%c", temp);
		
		if (i % 30 == 29)
			fprintf(fp2, "%c", '\0');
	}
	//for (i = 0; i < 20 ; i++)
	//	printf("%s\n", );
	return 0;
}

