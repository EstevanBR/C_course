/* chap6ex1.c */
#include <stdio.h>
#define LETTERS 26-1
int main(void)
{	
	char l_alpha[LETTERS];
	int i;

	for(i=0 ; i<=LETTERS ; i++)
	{
		//l_alpha[i] = i + 'a';
		printf("%c", l_alpha[i] = i+'a');
	}
	printf("\n");
	return 0;
}