/*
3:	
Write a program that reads input as a stream of characters until encountering EOF.
Have it report the number of uppercase letters and the number of lowercase letters in the input.
You may assume that the numeric values for the lowercase letters are sequential and assume the same for uppercase.
Or, more portably, you can use appropriate classification functions from the ctype.h library.
*/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int upper, lower, ch;
	for(upper = 0, lower = 0; (ch = getchar()) != EOF;)
	{
		upper+=(isupper(ch));
		lower+=(islower(ch));
	}
	printf("Uppercase = %d\nLowercase = %d\n", upper, lower);
	return 0;
}