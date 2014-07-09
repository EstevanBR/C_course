/************************************************
    * filename: mod3pro3.c
    * Assignment: Module 3, Programming Assignnment 3
    * Name: Estevan Hernandez
    * Date Created: June 24, 2014
    *
    * determines if a user entered integer is a prime
    * number. lists largest factor if not
    *************************************************/

#include <stdio.h>
int main(void)
{
	int divisors = 0;																							/* divisors, primes only have 2 divisors */
	unsigned long long firstdivisor, num, usernum;																/* firstdivisor is a variable to store the first factor found */
																												/* I chose unisgned long long in order to support the largest possible integer. Also, program does not use negative numbers */
	while (printf("Enter an integer to be tested for primality: ") && scanf("%llu", &usernum) && usernum != 0)	/* prints instructions for and reads user input, makeing sure input is succesfully read and that number the isn't 0 */
	{
		num = usernum;																							/* sets the starting number for loop as the entered number */
		
		while (num > 0)																							/* making sure tested number is larger than */
		{
			if (usernum % num == 0)																				/* if the number divides evenly, divisors + 1 */
				divisors++;
			
			if (divisors == 2 && num > 1)																		/* if there are 2 divisors, but we have not tested 1 as a divisor, then the number cannot be prime */
			{																									/* [cont'd] because primes only have 2 divisors, and one of them is always and if it's already found 2, and 1 isn't one of them, then the number cannot be prime */
				firstdivisor = num;																				/* saves the 2nd divisor found as 'first divisor' confusing, but we don't count the initial integer as the first divisor in this program. */
				printf("The number is not prime because it is divisible by %llu\n\n", firstdivisor);
				break;
			}

			if (num == 1 && divisors == 2)																		/* if the loop has reached 1, and has only found 2 divisors, then the number must be prime */
			{
				printf("The number is a prime.\n\n");
				break;
			}

			num--;																								/* if the program has reached this point without loops breaks, it decreases the divisor being tested by 1 */
		}
		divisors = 0;																							/* this is so that the loop doesn't start with divisors from the previous run through, creating a false positive */
	}
	printf("\nDone.\n");

	return 0;

}