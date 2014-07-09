#include <stdio.h>
#include <string.h>
int main(void)
{
	int howmany;
	int i;

	printf("Please enter amount of players:\n");
	scanf("%d", &howmany);
	howmany;
	int index[howmany][100][100];

	for(i = 1; i <= howmany; i++)
	{
		printf("Please enter player %d's name:\n", i);
		scanf("%5s", index[i][0]);
		while(getchar() != '\n')
			continue;
	}

	printf("Here is a list of the players\n");
	for(i = 1; i<= howmany; i++)
		printf("\nplayer %d's name is %s", i, index[i][0]);
	printf("\n");

	return 0;
}