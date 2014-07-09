/*chap7x3.c

Write a program that reads integers until 0 is entered. After
input terminates, the program should report the total number of
even integers (excluding the 0) entered, the average value of
the even integers, the total number of odd integers entered, and
the average value of the odd integers.
*/

#include <stdio.h>
//#include <ctype.h>
int main(void)
{
	int num = -1, even = -1, odd = 0;
	float evenavg = 0, oddavg = 0;
	printf("please enter some integers seperated by a space, with a 0 as the last integer:\n");
	while (num != 0) 
	{
		scanf("%d", &num);

		if ((num % 2) == 0)
		{
			even++;
			evenavg += num;
		}else{
			odd++;
			oddavg += num;
		}
	}
	evenavg /= even;
	oddavg /= odd;
	
	printf("amount of even numbers:\t%d average of all even numbers:\t%4.4f\namount of odd numbers:\t%d average of all odd numbers:\t%4.4f\n",
	even, evenavg, odd, oddavg);
	
	return 0;
}