#include <stdio.h>
int main(void)
{
	char * p1 = "Klingon";
	p1[0] = 'F';
	printf("Klingon");
	printf(": beware of the %ss\n", "Klingon");

	return 0;
}