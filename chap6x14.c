/* chap6x14.c */
#include <stdio.h>
int main(void)
{
	char line[255];
	int i = 0;

	printf("Enter a line of text and press [ENTER], then I will type it ~backwards~!\n");

	while (scanf("%c", &line[i]), line[i++] != ('\n'));

	while (i >= 0)
		printf("%c", line[i--]);
	
	printf("\n");
	
	return 0;
}
