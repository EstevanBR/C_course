#include <stdio.h>
char *pr (char *str);
int main(void)
{
	char *x = pr("Ho Ho Ho!");

	return 0;
}

char *pr (char *str)
{
  char *pc;

  pc = str;
  while (*pc)
     putchar(*pc++);
  do {
     putchar(*pc--);
     } while (pc - str);
  return (pc);
}

/*
What is printed?

	Ho Ho Ho!!oH oH oH

What type should x be?

	char*

What value does x get?

	the address of the first H

What does the expression *--pc mean, and how is it different from --*pc?

	*(--pc) vs --(*pc)
	the first decrements the pointer by 1 char and then dereferences to the char it points to.
	the latter .. idk what it does but its causing a bus error 10

What would be printed if *--pc were replaced with *pc--?

	Ho Ho Ho!!oH oH o

What do the two while expressions test for?

	while pc is not pointing to a null char, and while pc - str is greater than 0

What happens if pr() is supplied with a null string as an argument?

	nothing happens because the test expressions evaluate to 0 or null or false

What must be done in the calling function so that pr() can be used as shown?
	
	char *x = pr("Ho Ho Ho!");


*/