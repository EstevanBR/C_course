#include <stdio.h>
int main(void)
{
	printf("11.00 /  5.0 is %2.d and  11 %%  5 is %2.d\n", 11/5, 11 % 5);
	printf("11.00 /  0.5 is %2.d and  11 %% -2 is %2.d\n", 11/-5, 11 % -2);
	printf("00.11 /  0.5 is %2.d and -11 %% -5 is %2.d\n", -11/-5, -11 % -5);
	printf("00.11 /  5.0 is %2.d and -11 %%  5 is %2.d\n", -11/5, -11 % 5);

	return 0;
}