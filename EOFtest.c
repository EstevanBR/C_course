/* EOFtest.c */
#include <stdio.h>
int main(void)
{
	int ch;
	
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	/*
	do{
		ch = getchar();
		putchar(ch);
	}while(ch != EOF);
	*/

	return 0;
}