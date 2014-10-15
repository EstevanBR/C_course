//chap11pro11.c - read input up to EOF reports following information
/*
-number of words
-number of uppercase letters
-number of lowercase letters
-number of punctuation marks
-number of digits
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int words = 0;
	int upper = 0;
	int lower = 0;
	int punc = 0;
	int digits = 0;
	int ch;
	int prevch = 0;

	printf("Please enter some text:\n");

	while((ch = getchar()) != EOF)
	{
		if (isspace(ch) && isspace(prevch) == 0) //generally i think you can get away with counting spaces for words, but i added some code for the case of double spaces "fox      hound"
			words++;
		if (isupper(ch))
			upper++;
		if (islower(ch))
			lower++;
		if (ispunct(ch))
			punc++;
		if (isdigit(ch))
			digits++;
		prevch = ch; //flag for line 26

	}
	printf("Text analysis complete:\n%d words\n%d uppercase letters\n%d lowercase letters\n%d punctuation marks\n%d digits\n", words, upper, lower, punc, digits);

	return 0;
}