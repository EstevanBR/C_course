/************************************************
    * filename: mod3pro5.c
    * Assignment: Module 3, Programming Assignnment 5
    * Name: Estevan Hernandez
    * Date Created: June 24, 2014
    *
    * An encryption program that reads in a single
    * sentence up to the period. 
    * outputs the modified sentence with all of the
    * spaces  removed and replaces each of the vowels
    * with the letter 'Z'.
    * example:
    * "Hello world." is modified to "HZllZwZrld." 
    *************************************************/
#include <stdio.h>
int main(void)
{
	char ch;
	printf("Please type a sentence, I will remove spaces and convert each vowel into a Z:\n");
	while((ch = getchar()))			/*assigns user inputs to ch*/
	{
		switch(ch){					/*this switch controls the vowel substitutions*/
			case 'A': ch = 'Z';
			break;
			case 'E': ch = 'Z';
			break;
			case 'I': ch = 'Z';
			break;
			case 'O': ch = 'Z';
			break;
			case 'U': ch = 'Z';
			break;
			case 'a': ch = 'Z';
			break;
			case 'e': ch = 'Z';
			break;
			case 'i': ch = 'Z';
			break;
			case 'o': ch = 'Z';
			break;
			case 'u': ch = 'Z';
			break;
			case ' ': ch = '\b';	/*replaces the space with a backspace*/
			break;
		}
		putchar(ch);
		if (ch == '.')
			break;
	}
	putchar('\n');					/*just to look clean*/

	return 0;
}