/*

chap7x6.c

reads up to #, counts occurances of ie

*/

#include <stdio.h>
#include <string.h>
int main(void)
{
	char ch;
	char lastch;
	int occurances = 0;
	while (lastch = ch, (ch = getchar()) != '#')
	{
		//if (lastch == 'i' && ch == 'e')
		occurances += (lastch == 'i' && ch == 'e');
	}
	printf("%d", occurances);

	return 0;

}