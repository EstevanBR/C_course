#include <stdio.h>
#include <stdlib.h>
int daisy;
int main(void)
{
	//code;
	return 0;
}
int petal()
{
	extern int daisy, lily;
	daisy = 22;
	lily = 22;
	printf("daisy %d and lily %d\n", daisy, lily);
	//code;
	return 0;
}

//daisy - main(), petal(maybe), stem, root
//lily - stem, root, petal
//rose - root