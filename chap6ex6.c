/*chap6ex6.c*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	int letter;
	char word[100];

	printf("Please enter a word:\n");
	scanf("%s", word);
	letter = strlen(word);

	while (letter-- > 0)
		printf("%c", word[letter]);

	printf("\n");

	return 0;

}