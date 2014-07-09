/************************************************
* filename: module21.c
* Exercise: Module 2, Programming Assignment 1
* Name: Estevan Hernandez
* Date Created: May 15, 2014
*
* Description: this program will count and print
* the first 10 integers in order using a while loop.
*************************************************/
#include <stdio.h>
int main(void)
{
	int i = 1;
	while(i <= 10) /* while i is less than or equal to 10*/
	{
		printf("%d\n", i); /*print i and a carriage return*/
		i++; /*increment i by one and repeat block*/
	}

	return 0;
}
