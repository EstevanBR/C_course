#include <stdio.h>
int main(void)
{
	int i;
	int test[5] = {1,2,3,4,5};
	//printf("plese enter number 0-5\n");
	//scanf("%20d", &i);
	printf("test     =%20p\n"
		   "&test[0] =%20p\n", test, &test[0]);
	printf("*test+1  =%20d\n"
		   "test[1]  =%20d\n", *test+1, test[1]);
	printf("*test+1  =%20d\n"
		   "test[1]  =%20d\n", *test+2, test[2]);
	printf("*test+1  =%20d\n"
		   "test[1]  =%20d\n", *test+3, test[3]);

	return 0;
}
