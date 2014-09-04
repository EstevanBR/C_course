/* module 5 short answer 4
a version of strcopy using pointer notation */
#include <stdio.h>
char *strcopy(char * restrict s1, const char * restrict s2);
int main(void)
{
	int const length = 12;
	char nameorig[length] = "Frank Zappa";
	char namecopy[length];
	char * ch;

	ch = strcopy(namecopy, nameorig);
	printf("nameorig is \"%s\" at %p\n", nameorig, &nameorig);
	printf("namecopy is \"%s\" at %p\n", namecopy, &namecopy);
	//printf("and namecopy =\n%p\nor\n%p\n", ch, namecopy);
	return 0;
}

char *strcopy(char * restrict s1, const char * restrict s2)
{
	int i = 0;
	while(*((s2)+i) != '\000')
	{
		*((s1)+i) = *((s2)+i);
		printf("%p %c\n", s1+i, *((s1)+i));
		i++;
	}

	return s1;
}