/*
4:	
Write a program that reads input as a stream of characters until encountering EOF.
Have it report the average number of letters per word.
Don't count whitespace as being letters in a word.
Actually, punctuation shouldn't be counted either, but don't worry about that now.
(If you do want to worry about it, consider using the ispunct() function from the ctype.h family.)
*/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int ch;
	int words = 0;
	int letters = 0;
	float average;

	while ((ch = getchar()) != EOF)
	{
		if (isalpha(ch) || ispunct(ch))
		{
			letters+=isalpha(ch);
		}
		if (isspace(ch) && (ch = getchar()) && !isspace(ch))
			words++;
	}
	average = letters / words;

	printf("%d letters %d words\n", letters, words);
	printf("Average number of letters per word was %.3f letters\n", average);

	return 0;
}
