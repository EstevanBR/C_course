#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	int i;
	int ch;
	char name[1000];
	while((ch = getchar()) != EOF)
	{
		name[i] = ch;
		i++;
	}

	n = strlen(name);
	for(i = 0; i < n; i++)
		putchar(name[i]);

	return 0;
}