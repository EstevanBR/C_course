/*	
What is the value of *ptr and of *(ptr + 2) in each case?
*/
#include <stdio.h>
int main(void)
{

	int (*ptr)[2];
	int torf[2][2] = {12, 14, 16};
	ptr = torf;

 	// **ptr = 16
	// **(ptr+1) = 0





	int (*ptr2)[2];
	int fort[2][2] = { {12}, {14,16} };
	ptr2 = fort;

	// **ptr2 = 14
	// **(ptr2+1) = 16


	printf("**ptr is %d and **(ptr+2) is %d\n", **ptr, **(ptr+1));
	printf("**ptr2 is %d and **(ptr2+2) is %d\n", **ptr2, **(ptr2+1));

	return 0;

}