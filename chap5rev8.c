#include <stdio.h>
int main(void)
{
	/*int unsigned let = 96;

	while ((int) let++ < (int) 'g')
		printf("%c\n", (char) let);
	return 0;*/

	char c = 'a';

	while(c <= 'g')
		printf("%5c", c++);
	printf("\n");
	return 0;
}