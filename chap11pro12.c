#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	while(argc-- > 1)
	{
		printf("%s", argv[argc]);
		if (argc != 1)
			printf(" ");
		else
			printf("\n");
	}
	return 0;
}