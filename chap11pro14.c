#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char ch[strlen(argv[1])];
	int ich;
	sscanf(argv[1], "%s", ch);
	ich = atoi(ch);
	printf("ch[] = %s\n", ch);
	printf("ch[] = %d\n", ich);
	return 0;
}