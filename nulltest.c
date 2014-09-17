#include <stdio.h>
int main(void)
{
	int i;
	const char name1[5] = {'H', 'e', 'l', 'l', 'o'};
	const char name2[6] = {'H', 'o', 'l', 'a', '!', '\0'};

	//printf("%s", name1);

	for(i = 0; *(name1+i) != '\0'; i++)
		printf("%c", *(name1+i));

	return 0;
}