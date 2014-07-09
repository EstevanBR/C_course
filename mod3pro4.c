/************************************************
    * filename: mod3pro4.c
    * Assignment: Module 3, Programming Assignnment 4
    * Name: Estevan Hernandez
    * Date Created: June 24, 2014
    *
    * Description: Reads input until encountering
    * the # character and then reports the number of
    * spaces read, the number of new line characters
    * read, and the number of all other characters
    * read.
    *************************************************/
#include <stdio.h>
int main(void)
{
	/*these variables count the various characters
	defined in the program description*/
	int newlines; 
	int spaces;
	int other;
	char ch;
	newlines = 0;
	spaces = 0;
	other = 0;

	printf("Please write some text, ending with #,\n"
		"and I will calculate the occurance of spaces,\n"
		"new lines, and other characters.\n");
 
	while ((ch = getchar()) != '#') /* loop for character counts*/
	{
		if (ch == '\n') 			/* if ch is a new lines */
			newlines++;				/* increment counter */
		else if (ch == ' ')			/* if ch is a space */
			spaces++;				/* increment counter */
		else 						/* if character is not a new line or a space */
			other++;				/* increment counter */
	}
	printf("The text you entered has %d spaces,"
		" %d new lines, and %d other characters\n",
		spaces, newlines, other);

	return 0;
}