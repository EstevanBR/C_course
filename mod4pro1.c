/************************************************
    * filename: mod4pro1.c
    * Assignment: Module 4, Programming Assignnment 1
    * Name: Estevan Hernandez
    * Date Created: July 22, 2014
    *
    * Program that prompts the user to enter
    * in characters, an equal sign, and an integer.
    * The program then reads and discards all characters
    * from standard input using getchar() until it
    * encounters the "=".  The program then reads the
    * integer value that follows the "=" using scanf()
    * and outputs the value back to the user.
    *************************************************/
#include <stdio.h>
int main(void)
{
	int num;
	printf("Please enter some text, followed by an equals sign and lastly and integer:\n");
	while((getchar() != '='))
		continue;
	scanf("%d", &num);
	printf("the integer you entered is: %d\n", num);

	return 0;
}