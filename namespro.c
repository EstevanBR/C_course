/*
namespro.c
*/
#include <stdio.h>
#include <string.h>
int getnames(int * add, int num);
int main(void)
{
	int * address;
	int i;
	int names[10][20];

	for (i = 0; i <= 10; i++)
	{
		address = &names[i];
		getnames(address, i);
	}

	for (i = 0; i <= 10; i++)
	{
		printf("%s\n", names[i]);
	}

	return 0;
}

int getnames(int * add, int num)
{
	printf("%d please give me a name\n", num);
	scanf("%20s", add);
	while (getchar() != '\n')
		continue;
	return 0;
}