/*
Create a text file consisting of 20 rows of 30 integers.
The integers should be in the range 0–9 and be separated by spaces.
(The file is a digital representation of a picture, with the values 0 through 9 representing increasing levels of darkness.)

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
	char asciiscale[10] = " .,-:=+*#@";
	int i;
	int j;
	char in[40];

	FILE *fp, *fp2;
	
	printf("Please name the .txt input file (hint: grid.txt would be \"grid\"\n");
	scanf("%39s", in);
	strcat (in,".txt");
	if ((fp = fopen(in, "r")) == NULL)
	{
		printf("could not open file! \007\n");
		exit(0);
	}
	printf("Please name the output file\n");
	char out[40];
	scanf("%39s", out);
	strcat (out,".txt");
	if ((fp2 = fopen(out, "w")) == NULL)
	{
		printf("could not create or open output file! \007\n");
		exit(0);
	}
	
	//THIS CODE BLOCK SCANS CONTENTS OF GRID.TXT INTO NUMBERS[][] AS INTEGERS
	for (i = 0; i < 20*30; i++)
	{
		fscanf(fp, "%i", &numbers[0][i]);
	}
	
	//THIS CODE BLOCK COPIES NUMBERS INTO LETTERS WITH CHARACTER REPLACEMENT
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 30; j++)
		{
			letters[i][j] = asciiscale[(numbers[i][j])];
		}
		letters[i][j] = '\0';
	}

	//THIS CODE BLOCK PRINTS LETTERS
	for (i = 0; i < 20; i++)
	{
		printf("%s\n", letters[i]);
		fprintf(fp2, "%s\n", letters[i]);
	}

	printf("**created file \"%s\"\n from \"%s\"**", out, in);

	return 0;
}