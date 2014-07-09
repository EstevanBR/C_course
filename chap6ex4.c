/* chap6ex3.c */
#include <stdio.h>
#include <string.h>
int main(void)
{
	char input;

	printf("Please enter an upper case letter (ex. A)\n");
	scanf("%c", &input);
	int rows = 0;
	char maxrows = input - 'A';
	int spaces = maxrows - 1;
	char alpha[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int increment = 0, loopmax = 1, absolutemax = input - 'A';
	int xx;
	//1.0 first loop rows
	while (rows <= maxrows)
	{
		//1.1 first sub loop, spaces
		while (spaces-- >= 0)
			printf(" ");

		//1.2 second sub loop, ascending A..Z
		while (increment < loopmax)
			printf("%c", alpha[increment++]);
		xx = increment;
		increment = 0;
		loopmax++;
		
		//1.3 third sub loop, descending Z..A
		while (xx > 1)
			printf("%c", alpha[--xx]-1);

		maxrows--;
		spaces = maxrows - 1;
		printf("\n");
	}

	return 0;
}

/*

program to print:
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/