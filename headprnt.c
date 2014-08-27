#include <stdio.h>
#define WIDTH 48
int main(void)
{
	int ch;
	int i = 0;

	do{
		ch = getchar();
		putchar(ch);
		i++;
		i = i % 48;
		if (i == 0)
			printf("\n* ");
	}
	while (ch != EOF);

	return 0;
}