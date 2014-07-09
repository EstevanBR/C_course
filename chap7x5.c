/*
chap7x5.c
Redo exercise 3 using a switch.
*/

#include <stdio.h>
int main(void)
{
	int num = -1, even = -1, odd = 0;
	float evenavg = 0, oddavg = 0;
	printf("please enter some integers seperated by a space, with a 0 as the last integer:\n");
	while (num != 0) 
	{
		scanf("%d", &num);

		switch((num % 2) == 0)
		{
		case 1: even++;
				evenavg += num;
				break;
		case 0:	odd++;
				oddavg += num;
				break;
		}
	}
	evenavg /= even;
	oddavg /= odd;
	
	printf("amount of even numbers:\t%d average of all even numbers:\t%4.4f\namount of odd numbers:\t%d average of all odd numbers:\t%4.4f\n",
	even, evenavg, odd, oddavg);
	
	return 0;
}