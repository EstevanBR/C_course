/*
chap11rev10.c

Design a function that takes a string pointer
as an argument and returns a pointer to the
first space character in the string on or
after the pointed-to position. Have it
return a null pointer if it finds no spaces.
*/

#include <stdio.h>
char * spaceman(char letter[]);
int main(void)
{
	char phrase[20] = "spaceman!!";
	char *point;
	printf("address for '%c' is %p\n", phrase[5], &phrase[5]);
	printf("but another way to do it is use spaceman();\n");
	point = spaceman(phrase);
	printf("which is %p\ncompare:\n%p and\n%p\n", point, point, &phrase[5]);

	return 0;
}
char * spaceman(char letter[])
{
	int i = 0;
	char *point;
	while(letter[i] != '\0')
	{
		if (letter[i] == ' ')
		{
			point = &letter[i];
			break;
		}
		point = NULL;
		i++;
	}
	return point;
}