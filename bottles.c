#include <stdio.h>
int main(void)
#define MAX 100
{
	int count = MAX + 1;
	while (--count >0) {
		if (count >= 3)
			{
				printf("%d bottles of spring water on the wall, %d bottles of spring water!\
					\nTake one down and pass it around,\n%d bottles of spring water!\n\n", count, count, count - 1);
			}
		if (count == 2)
			{
				printf("%d bottles of spring water on the wall, %d bottles of spring water!\
					\nTake one down and pass it around,\n%d bottle of spring water!\n\n", count, count, count - 1);
			}
		if (count == 1)
		{
			printf("%d bottle of spring water on the wall, %d bottle of spring water!\
				\nTake one down and pass it around,\n%d bottles of spring water!\n\n", count, count, count - 1);
		}

	}

	return 0;
}
