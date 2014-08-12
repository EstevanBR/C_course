#include <stdio.h>
int main(void)
{
	int *j;
	//int i;
	printf("enter an address:\n");
	scanf("%p", &j);
	printf("the address you entered is:%p\n", j);
	int *i = &*j;
	//*j = 23;
	//i = *j;
	//printf("enter a number:\n");
	//scanf("%d", &i);
	//*j = 23;
	printf("i is %d", *i);
	return 0;

}