 /************************************************
    * filename: mod5pro5.c
    * Assignment: Module 5, Programming Assignnment 5
    * Name: Estevan Hernandez
    * Date Created: August, 27, 2014
    *
	* Write a program that prompts the user for a
	* character string. Pass this string to a function
	* called reverse() that you create as part of your
	* program. The function reverse() then reverses
	* the order of all of the characters in the
	* string. The function main() then prints out the
	* reversed string string.
    *************************************************/

#include <stdio.h>
#include <string.h>
void reverse(char string[], int limit);
int main(void)
{
	char string[40];
	int i;

	printf("Please enter a string and I will reverse it\n");
	scanf("%39s", string); /* 39 instead of 40, leaving 1 for the null character */
	reverse(string, strlen(string+1)); /* this calls the function and uses "strlen" to determine loop test expressions and bounds of an array within the function */
	printf("The new string is:\n\"%s\"\n\n", string); /* the new string is printed. fancy that :) */

	return 0;
}
void reverse(char string[], int limit) /* here I pass the address of the array, and a int corresponding to the length of the original string */
{
	int i, j;
	char string2[limit]; /* this is another array which I copy the original array into, but in reverse order */

	for(i = 0, j = limit; i <= limit && j >= 0; i++, j--) /* these loops start from the end of the array from main() and the beginning of the new array */
	{
		string2[i] = string[j]; /* copying data from one array to another, in reverse order */
	}
	for(i = 0; i <= limit; i++)
	{
		string[i] = string2[i]; /* this code copies the data in the new array (string2), into the old one. so that main can print the modified string */
	}
}