#include <stdio.h>
int main(void)
{
	int i;
	int test[5] = {1,2,3,4,5};
	//printf("plese enter number 0-5\n");
	//scanf("%d", &i);
	printf("test =\t\t%p\n"
			"&test[0] =\t%p\n", test, &test[0]);
	return 0;
}
