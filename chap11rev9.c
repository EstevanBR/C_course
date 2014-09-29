/*
homestrl.c
*/
#include <stdio.h>
#include <string.h>
int strlenHB(const char * array);
int main(void)
{
	char name[50] = {"Super man!!!!"};
	int len = strlenHB(name);
	printf("\"%s\" is %d long but also %lu long when using strlen\n", name, len, strlen(name));

	return 0;
}
int strlenHB(const char * array)
{
	int i = 0;
	while(array[i] != '\0')
		i++;
	return i;
}