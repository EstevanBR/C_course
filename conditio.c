/*conditio.c*/
#include <stdio.h>
#include <limits.h>
#define XBIGGER printf("x = %llu is bigger than y = %llu\n", x, y)
#define YBIGGER printf("y = %llu is bigger than x = %llu\n", y, x)
int main(void)
{
	unsigned long long int x, y, z;
	printf("%llu\n\n", ULLONG_MAX);
	printf("please enter 2 numbers no bigger than %llu, x and y:\n", ULLONG_MAX);
	scanf("%llu %llu", &x, &y);

	(x > y) ? XBIGGER : YBIGGER ;

	return 0;


}