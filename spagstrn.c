#include <stdio.h>
#include <string.h>
int main(void)
{
	int size = (strlen("Hello my name is spider man pig bear monkey."));
	char *point[9];
	char words[] = {"Hello my name is spider man pig bear monkey."};
	int i;
	int j;

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
		printf("%s", point[i]);
	}

	return 0;


}