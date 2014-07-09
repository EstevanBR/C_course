/*
5:	
Modify the guessing program of Listing 8.4 so that it uses a more intelligent guessing strategy.
For example, have the program initially guess 50, and have it ask the user whether the guess is high, low, or correct.
If, say, the guess is low, have the next guess be halfway between 50 and 100, that is, 75.
If that guess is high, let the next guess be halfway between 75 and 50, and so on.
Using this binary search strategy, the program quickly zeros in on the correct answer, at least if the user does not cheat.
*/
/* guess.c -- an inefficient and faulty number-guesser */
#include <stdio.h>
//#include <ctype.h>
//#include <stdlib.h>
//#include <math.h>
int main(void)
{
    int guess = 50, guesses = 1;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a 'correct' if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar())!= 'c')      /* get response, compare to y */
    {
    	guesses *= 2;
    	if (response == 'h')
    	{
    		guess -= (100/guesses)/2;
    		printf("Ok I guessed too high...\n");
			printf("Well, then, is it %d?\n", guess);
		}
		else if (response == 'l')
		{
			guess += (100/guesses)/2;
			printf("Guessed too low then huh?...\n");
			printf("Well then is it %d?\n", guess);
		}
		else
			printf("Sorry I only understand low, high, or correct.\n");
        while (getchar() != '\n')// || getchar() != 'c' || getchar() != 'l' || getchar() != 'h')
			continue;
	}
    printf("I knew I could do it!\n");

    return 0;
}