/* for_show.c */
#include <stdio.h>
int main(void)
{
	int num = 0;
	for (printf("Keep entering numbers!\n"); num != 6; )
		scanf("%d", &num);
	printf("thats the one i want!\n");
	return 0;
}