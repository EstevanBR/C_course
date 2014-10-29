#include <stdio.h>
int main(int argc, char const *argv[])
{
	char string[200] = {"HELLO moto \nmy name is frodo\ntest test"};
	printf("%s\n", &string[5]);

	return 0;
}