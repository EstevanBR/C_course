#include <stdio.h>
int main(void)
{
	int i = 10;
	int * p = &i;
	printf("%p\n", p);
	getchar();
	return 0;
}