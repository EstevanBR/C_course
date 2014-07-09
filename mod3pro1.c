/************************************************
    * filename: mod3pro1.c
    * Assignment: Module 3, Programming Assignnment 1
    * Name: Estevan Hernandez
    * Date Created: June 24, 2014
    *
    * uses nested loops to print a left aligned
    * pyramid of amperstands, 6 rows tall to be exact.
    *************************************************/

#include <stdio.h>
int main(void)
{
	int maxrow, currow, rows = 6;					/*maxrow is the max amount of ampersands for the current row
													currow is the current ampersand for the row
													rows is the max amount of rows to print*/
	for (maxrow = 1; maxrow <= rows; maxrow++)		/* this loop controls how many rows get printed */
	{
		for (currow = 1; currow <= maxrow; currow++)/* this loop controls how many times an ampersand is printed in each row */
			printf("&");							/* prints ampersand */
		printf("\n");								/* prints new line */
	}
	return 0;
}