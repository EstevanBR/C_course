/*	
What is the value of *ptr and of *(ptr + 2) in each case?
*/
#include <stdio.h>
int main(void)
{

	int *ptr;
	int torf[2][2] = {12, 14, 16};
	ptr = torf[0];

	int * ptr2;
	int fort[2][2] = { {12}, {14,16} };
	ptr2 = fort[0];


	printf("*ptr is %d and *(ptr+2) is %d\n", *ptr, *(ptr+2));
	printf("*ptr2 is %d and *(ptr2+2) is %d\n", *ptr2, *(ptr2+2));

	return 0;

}