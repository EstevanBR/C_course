#include <stdio.h>
int main(void)
{
  	int ref[] = {8, 4, 0, 2};
  	int *ptr;
  	int index;

	for (index = 0, ptr = ref; index < 4; index++, ptr++)
  		printf("%d %d\n", ref[index], *ptr);

  	printf("++ref is %p and ++*ref is %d\n", ++ref, ++*ref);

	return 0;
}