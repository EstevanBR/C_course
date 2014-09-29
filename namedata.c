#include <string.h>
#include <stdio.h>

int main(void)
{
	char name[30];
	char city[30];
	char color[10];
	char info[120];
	char temp[30];

	printf("please tell me your first name\n");
	gets(temp);
	strncpy(name, temp, 30-1);
	printf("also please tell me in which city you were born?\n");
	gets(temp);
	strncpy(city, temp, 30-1);
	printf("and lastly, what is your favorite color?\n");
	gets(temp);
	strncpy(color, temp, 30-1);

	sprintf(info, "name: NAMEXY\b\b\b\b\b\b%sfav color is COLORXY\b\b\b\b\b\b\b%s place of birth is: BIRTHXY\b\b\b\b\b\b\b%-10s", name, color, city);

	puts(info);

	return 0;
}