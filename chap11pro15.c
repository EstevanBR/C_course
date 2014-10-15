//not done yet
//reads input until EOF> takes arguments -p -u and -l to print as is, or all lower, or all upper
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	/* code */
	int i;
	int len = 0;
	int asis;
	int up;
	int low;
	for (i = 1; i < argc; i++)
	{
		len += strlen(argv[i]);
	}

	asis = (strncmp(argv[i], "-p", 2));
	up = (strncmp(argv[i], "-u", 2));
	low = (strncmp(argv[i], "-l", 2));

	printf("%d %d %d\n", asis, up, low);


	return 0;
}