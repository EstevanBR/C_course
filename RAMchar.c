#include <stdio.h>
int main(void)
{
	char ch;
	char ptr[2];
	int i = 0;

	while(1)
	{
		putchar(ptr[i]);
		i++;
	}

	return 0;
}