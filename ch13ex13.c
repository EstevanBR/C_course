/*
Digital images, particularly those radioed back from spacecraft, may have glitches.
Add a de-glitching function to programming exercise 12.
It should compare each value to its immediate neighbors to the left and right,
above and below.
If the value differs by more than 1 from each of its neighbors,
replace the value with the average of the neighboring values.
You should round the average to the nearest integer value.
Note that the points along the boundaries have fewer than four neighbors, so they require special handling.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int numbers[20][30];
	char letters[20][31];
	char asciiscale[10] = " .,-:=+*#@";
	int i;
	int j;
	char in[40];
	int avg;
	float sum;
	int count;

	FILE *fp, *fp2, *fp3;
	
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

	//THIS CODE IS FOR EXERCISE 13, DE-GLITCH
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 30; j++)
		{
			avg = 0;
			count = 0;
			sum = 0;

			if ((j-1) > 0 && (abs(numbers[i][j-1] - numbers[i][j])) > 1) 
			{
				count++;
				sum += numbers[i][j-1];
			}
			if ((j+1 < 30) && (abs(numbers[i][j+1] - numbers[i][j])) > 1)  
			{
				count++;
				sum += numbers[i][j+1];
			}
			if ((i-1) > 0 && (abs(numbers[i-1][j] - numbers[i][j])) > 1)
			{
				count++;
				sum += numbers[i-1][j];
			}
			if ((i+1) < 20 && (abs(numbers[i+1][j] - numbers[i][j])) > 1)
			{
				count++;
				sum += numbers[i+1][j];
			}
			sum /= count;
			avg = roundf(sum);
			numbers[i][j] = avg;
		}
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