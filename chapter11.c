#include <stdio.h>
int main(void)
{
	char line[81];
	//while (gets(line))
	//	puts(line);

	while (fgets(line, 81, stdin))
		fputs(line, stdout);

	return 0;
}