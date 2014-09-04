#include <stdio.h>
int main(void)
{
	int i = 10, j = 12;
	int tenxtwelve[i][j];

	for (i = 0; i < 10; i++)
	{
		for(j = 0; j < 12; j++)
		{
			tenxtwelve[i][j] = ((i + j) % 7);
			printf("tenxtwelve[i][j] =%3d which is%3d +%3d or%4d mod 7\n", tenxtwelve[i][j], i, j, i+j);
		}
	}
	printf("done\n");
	return 0;
}