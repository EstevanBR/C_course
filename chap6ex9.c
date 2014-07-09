/* chap6ex9.c */
#include <stdio.h>
int main(void)
{
	int first, second, i, result;
	result = 0;
	
	do{
		printf("Enter upper and lower integer limits: ");
		scanf("%d %d", &first, &second);
		i = first;

		while(i <= second)
			{
				result = result + (i * i);
				i++;
			}
		if (first < second)
			printf("the sums of the squares from %d to %d is %d\n", first * first, second * second, result);
		result = 0, i = 0;
	}while (first < second);

	return 0;
}