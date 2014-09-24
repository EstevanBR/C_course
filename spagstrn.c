#include <stdio.h>
#include <string.h>
int main(void)
{
	char *point[9];
	char words[] = {"Hello my name is spider man pig bear monkey."};
	int size = (strlen("Hello my name is spider man pig bear monkey."))+1;
	int i;
	int j;
	printf("%d \n", size);
	for(i = 0, j = 0; i < size; i++)
	{
		if (words[i] == ' ' || words[i] == '.' || words[i] == '\n')
		{
			words[i] = '\0';
			point[j] = &words[i+1];
			j++;
		}
	}

	for (i = 0; i < 9; i++)
	{
		printf("%-10s -=-\n", point[i]);
	}

	return 0;


}