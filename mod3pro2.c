/************************************************
    * filename: mod3pro2.c
    * Assignment: Module 3, Programming Assignnment 2
    * Name: Estevan Hernandez
    * Date Created: June 24, 2014
    *
    * calculates the surface area and volume of a
    * rectangular box with a user defined unit of
    * measurement
    *************************************************/

#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void)
{
	float height, width, length, surface, volume;
	char units[40];
	printf("please enter the unit of measurment you are using (example: cm, inches, feet)\n");
	scanf("%s", units);																	/* scans a string for unit of measurement. not part of the assigmnet, just a little flair for a pleasnat UX */
	while(1) /* setting up a repeating loop */
	{
		printf("\nPlease enter the height, width, and length"
			"\nfor a rectangular box, and I will calculate surface area and volume.\n"
			"[you can also enter 0 or a negative value to quit the program].\n\n");

		printf("Please enter the height, and press [ENTER]: ________\b\b\b\b\b\b\b\b");	/* these next 3 segments of code take user input for the dimensions of the cuboid	*/
		scanf("%f", &height);															/* they also check for 0 or negative dimensions										*/
		if (height <= 0)																/* and break the loop if entered													*/
			break;

		printf("Please enter the width,  and press [ENTER]: ________\b\b\b\b\b\b\b\b");
		scanf("%f", &width);
		if (width <= 0)
			break;
		
		printf("Please enter the length, and press [ENTER]: ________\b\b\b\b\b\b\b\b");
		scanf("%f", &length);
		if (length <= 0)
			break;

		if (height == 9 && width == 4 && length == 1)									/* an easter egg for fans of 2001: A Space Odyssey */
			{
				printf("\n~I'm sorry, Dave. I'm afraid I can't do that - HAL 9000 - 2001: A Space Odyssey, Stanley Kubrick~\007.\n");
			}

		surface = (length * width * 2) + (length * height * 2) + (width * height * 2);	/* surface area formula */
		volume = length * width * height;												/* volume formula 		*/

		printf("\nAccording to the dimensions you have entered,\n");
		printf("the surface area of your rectangular box is:\n%.2f square %s\n", surface, units);
		printf("and the volume is:\n%.2f cubic %s\n", volume, units);

	}//while(1);
	printf("\nDone.\n");

	return 0;
}