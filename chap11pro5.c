/*
chap11pro5.c
Write a function called is_within() that takes a character and a string pointer as its two function parameters.
Have the function return a nonzero value (true) if the character is in the string and zero (false) otherwise.
Test the function in a complete program that uses a loop to provide input values for feeding to the function.
*/
#include <stdio.h>
#include <string.h>
int is_within(const char ch, const char ps[]);
int main(void)
{
	const char string[] = {"The two forms are nearly equivalent. Keep in mind that the ?: is an expression and if-then-else is a statement. Note that neither the true nor false portions can be omitted from the conditional operator without an error report upon parsing. This contrasts with if-then-else statements, where the else clause can be omitted. Most of the languages emphasizing functional programming don't need such an operator as their regular conditional expression(s) is an expression in the first place e.g. the Scheme expression (if (> a b) a b) is equivalent in semantics to the C expression (a > b) ? a : b. This is also the case in many imperative "};
	char ch;

	for(ch = 'A'; ch <= 'z'; ch++)
	{
		printf("is %c in the string? ", ch);
		printf("%3s it appears %3d times\n", (is_within(ch, string)) ? "yes" : "no", is_within(ch, string));
	}

	return 0;
}
int is_within(const char ch, const char ps[])
{
	int n = strlen(ps);
	int i;
	int count = 0;
	for(i = 0; i < n; i++)
	{
		if (ps[i] == ch)
			count++;
	}

	return count;
}