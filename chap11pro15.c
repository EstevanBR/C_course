//not done yet
//reads input until EOF & takes arguments -p -u and -l to print as is, or all lower, or all upper
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
	/* code */
	int i;
	int len = 0;
	int asis;
	int up;
	int low;
	int ch;

	if (argc > 1 && strlen(argv[1]) == 2)
	{
		asis = ((int) (strstr(argv[1], "-p")) > 0);
		up = ((int) (strstr(argv[1], "-u")) > 0);
		low = ((int) (strstr(argv[1], "-l")) > 0);
	}else{
		printf("command line arguments malformatted! (-p, -u, or -l)\n");
	}

	printf("-p %d, -u %d, -l %d\n", asis, up, low);

	while((ch = getchar()) != EOF)
	{
		if (asis == 1)
			putchar(ch);
		if (up == 1){
			ch = toupper(ch);
			putchar(ch);
		}
		if (low == 1){
			ch = tolower(ch);
			putchar(ch);
		}
	}

	printf("Done.\n");


	return 0;
}