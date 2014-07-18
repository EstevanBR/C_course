/*pointertest.c*/
#include <stdio.h>
int main(void)
{
	int val, bah;
	int * ptr;
	val = 22;
	//y = *(&x);
	//printf("y = %d at address %p\n", x, &x);
	ptr = &val;
	bah = *ptr;
	printf("\naddress of initial value :%p value :%d value at address %d\n", ptr, val, bah);
	int last;
	last = *&val;
	printf("%d\n", last);

	return 0;
}