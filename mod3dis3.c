/* mod3dis3.c
Author: Estevan Hernandez
Descripton:
A small program to list the modes of the major scale
*/

#include <stdio.h>
int main(void)
{
	int scaledegree;

	printf("Please enter a scale degree (1 - 7), and I will tell you which mode corresponds to that scale degree.\n");
	scanf("%d", &scaledegree);

	scaledegree--;
	scaledegree = scaledegree % 7;

	printf("The scale degree you have entered corresponds to the ");
	switch(scaledegree){
		case 0: printf("Ionian (major)");
		break;
		case 1: printf("Dorian");
		break;
		case 2: printf("Phrygian");
		break;
		case 3: printf("Lydian");
		break;
		case 4: printf("Mixolydian");
		break;
		case 5: printf("Aeolian (natural minor)");
		break;
		case 6: printf("Locrian");
		break;
		default: printf(" mode of its parent major scale.\n");
	}
	printf(" mode of its parent major scale.\n");


	return 0;
}