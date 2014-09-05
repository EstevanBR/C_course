#include <stdio.h>
#include <string.h>
#include <ctype.h>
void shift(char *web);
int main(void)
{
	char web[41];

	printf("\n\nPlease enter a string:__________\b\b\b\b\b\b\b\b\b\b");

	scanf("%40s", web);

	printf("the string you entered is \"%s\"\n", web);

	shift(web);

	printf("and shifted is \"%s\"\n\n\n", web);

	return 0;
}

void shift(char *web)
{
	int i;
	
	if (isalpha(web[0]))
	{
		for (i = 0; web[i] != '\0'; i++)
		{
			if (isupper(web[0]))
				web[i] = toupper(web[i]);

			if (islower(web[0]))
				web[i] = tolower(web[i]);
		}
	}
}