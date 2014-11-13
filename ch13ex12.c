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
	int ch;
	int i;
	int j;
	FILE *fp, *fp2;
	fp = fopen("grid.txt", "r");
	fp2 = fopen("grid.out.txt", "w");
	for (i = 0; i < 20*30; i++)
	{
		fscanf(fp, "%i", &numbers[0][i]);
		printf("%i", numbers[0][i]);
		if (i % 30 == 29)
			printf("\n");
	}
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 30; j++)
		{
			sprintf(buffer, "%i", numbers[i][j]);
			strncpy(&letters[i][0], buffer, 30);
		}
	}
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 31; j++)
		{
			switch(letters[i][j])
			{
				case '0': letters[i][j] = '.';
				break;
				case '1': letters[i][j] = ',';
				break;
				case '2': letters[i][j] = ':';
				break;
				case '3': letters[i][j] = ';';
				break;
				case '4': letters[i][j] = '\"';
				break;
				case '5': letters[i][j] = '*';
				break;
				case '6': letters[i][j] = '&';
				break;
				case '7': letters[i][j] = '%';
				break;
				case '8': letters[i][j] = '@';
				break;
				case '9': letters[i][j] = '#';
				break;
			}
		}
		//if (j == 30)
		//	letters[i][30] = '\0';
	}
	printf("here:\n");
	for(i = 0; i < 20; i++)
	{
		for (j = 0; j < 30; j++)
		{
			//printf("%c", letters[i][j]);
			//fprintf(fp2, "%c", letters[i][j]);
		}
	}

	fwrite(letters, 1L, 20*30, fp2);

	return 0;
}

