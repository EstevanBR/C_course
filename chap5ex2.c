/*plusten.c -- chapter 5 programming assignment #2*/
#include <stdio.h>
int main(void)
{
	int num;
	
	printf("please enter a number____\b\b\b\b");
	scanf("%d", &num);
	printf("\nhere are the next 10 integers starting from your number:\n");
	
	int numten = num+10;
	
	while(num <= numten)
	{
		printf("%d ", num);
		num++;
	}
	printf("\n");

	return 0;
}