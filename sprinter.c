#include <stdio.h>
#include <string.h>
int main(void)
{
	char strings[3][11] = {
		{"monkey"},
		{"butt"},
		{"scratcher"}
	};

	char combo[80];

	sprintf(combo, "%s %s %s", strings[0], strings[1], strings[2]);

	puts(combo);

	return 0;

}