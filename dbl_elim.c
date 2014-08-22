/************************************************
    * filename: dbl_elim.c
    * Name: Estevan Hernandez
    * Date Created: June 25, 2014
    *
 	* a program for a double elim bracket
    *************************************************/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <signal.h>
int getplayers(void);
int gettags(int * add, int num);
int getsetups(void);
int check_if_odd(int num);
int iscorrect(int num);
int getseed(int num);
bool IsPowerOfTwo(int x);

int main(void)
{

	float times['Z'];
	float matchtimelimit;		/*the time limit for matches (used to calculate how long tourney can go)*/
	float poolslength;			/*how long it will take to finish pools*/
	float tourneylength;		/*how long it will take for the entire tournament*/
	float poollength;			/*how long each pool will take*/
	float bracketlength;		/*how long it will take to finish bracket (seed -> GF)*/
	int poolsindex;	
	int i;
	int j;
	int amountofplayers;		/*amount of players entering pools*/
	int bracketseed;			/*size of bracket (power of 2)*/
	int poolsize;				/*size of each pool*/
	int amountofpools;			/*how many pools there are for each choice*/
	int bestofbracket;			/*actual variable corresponding to user choice*/
	int bestofpools;			/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
	int setsperpool;			/*how many sets must be played in a pool*/
	int totalpoolssets;			/*how many sets for all pools*/
	int setsinbracket;			/*how many sets must be played in bracket*/
	int setups;					/*how many sets for all brackets*/
	int player1;
	int player2;
	char bracketchoice;			/*user can choose between 4 bracket sizes, 4, 8, 16, 32*/
	char bestofpoolschoice;		/*user can choose between best of 3, 5, or 7 matches POOLS*/
	char bestofbracketchoice;	/*user can choose between best of 3, 5, or 7 matches BRACKET*/
	int poolschoice;

	amountofplayers = getplayers();
	setups = getsetups();

	int primes[] =
	{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997};
	int poolsamountchoice[amountofplayers];
	int poolsizechoice['Z'][2];
	int playertags[amountofplayers][6];
	int playerid[amountofplayers];

	int * address;

	for (i = 0; i < amountofplayers; i++)
	{
		address = &playertags[i];
		//gettags(address, i);//uncomment for tags 1/2
		playerid[i] = primes[i];
	}
	for (i = 0; i < amountofplayers; i++)
	{
		//printf("player %d's tag is %s their id is %d\n", i+1, playertags[i], playerid[i]);//uncomment for tags 2/2
	}
	
	printf("Please enter desired \"Best of\" number for pools:\n");
	scanf(" %d", &bestofpools);
	bestofpools = check_if_odd(bestofpools);
	printf("You have chosen best of %d for pools\n", bestofpools);
	printf("Please enter desired \"Best of\" number for bracket:\n");
	scanf(" %d", &bestofbracket);
	bestofbracket = check_if_odd(bestofbracket);
	printf("You have chosen best of %d for bracket\n", bestofbracket);
	printf("Please enter the time limit (or average match time) for each match in minutes\n");
	scanf("%f", &matchtimelimit);
	bracketseed = getseed(amountofplayers);
	printf("\n\nTo seed a bracket of %d players from %d initial players in the given amount of time, there needs to be:\n", bracketseed, amountofplayers);

	for (poolsindex = 0, poolsize = amountofplayers, amountofpools = 1, i = 0;
		poolsize >= 1 && (bracketseed / amountofpools) >= 1 && poolsize >= 2;
		amountofpools*=2, poolsindex++)
	{
		poolsize = amountofplayers / amountofpools;
		if ((poolsize * amountofpools) < amountofplayers)
			poolsize++;
		setsperpool = (poolsize * (poolsize+1))/2;
		totalpoolssets = setsperpool * amountofpools;
		poollength = (((setsperpool * bestofpools * matchtimelimit)/60)/setups);
		poolslength = (((totalpoolssets * bestofpools * matchtimelimit)/60)/setups);
		setsinbracket = ((bracketseed * 2)-1);
		bracketlength = ((setsinbracket * bestofbracket * matchtimelimit)/60/setups);
		tourneylength = poolslength + bracketlength;

		if (poolsize > 2)
		{
			printf("\nFORMAT: %c\n", (i + 'A'));
			printf("%d pools\n", amountofpools);
			printf("%d amount of players each\n", poolsize);
			printf("With the top %d players of each pool advancing to bracket\n", bracketseed / amountofpools);
			printf("Which would be %d max sets that must be played in each pool\nand take max %.2f hrs. to complete per pool\n",
				setsperpool, poollength);
			printf("Which would be %d max sets that must be played for all pools, which would take %.2f hrs. to complete before bracket is seeded\n",
				totalpoolssets, poolslength);
			printf("With %d sets in bracket, the entire tournament would take %.2f hrs.\n", setsinbracket, tourneylength);
			times[i] = tourneylength;
			poolsizechoice[i][0] = poolsize;
			poolsizechoice[i][1] = amountofpools;
			i++;
		}
		
		if ((bracketseed / amountofpools) == 1)
			break;
	}
	printf("\n\nChoices of:");
	for(i = 0 ; i <= poolsindex && times[i] != 0;)
	{
		printf("\nFORMAT %c would take %.2f hours\n", (i + 'A'), times[i]);
		printf("%d pools with %d people each\n", poolsizechoice[i][1], poolsizechoice[i][0]);
		i++;
	}
	printf("\nA bracket of %d would take %.2f hrs.\n", bracketseed, bracketlength);
	//i--;// idk why this code is here lol

	printf("\n\n\nDISCLAIMER:\nALL CALCULATIONS ARE ESITMATES AND DO NOT FACTOR IN -\n"
		"TIME TAKEN BETWEEN GAMES/SETS/MATCHES. EX: TIME TAKEN TO FIND PLAYERS.\n");

	return 0;
}










int check_if_odd(int num)
{
	while (num % 2 == 0)
	{
		printf("ERROR:\nnumber must be odd, please enter an odd number:\n");
		scanf("%d", &num);
	}

	return num;
}

int getplayers()
{
	int num;
	do{
		printf("~POOLS~\nPlease enter number of initial players:\n");
		scanf("%d", &num);
		if (num <= 2)
			printf("ERROR: must have more than 2 players!\007\n");
	}while(num <= 2);
	return num;
}

int getsetups()
{
	int setups;
	do{
		printf("Please enter number of setups:\n");
		scanf("%d",&setups);
		if (setups < 1)
			printf("ERROR: must have at least one setup!\007\n");
	}while(setups < 1);

	return setups;
}

int iscorrect(int i)
{
	printf("is this information correct... y/n?\n");
	while(getchar() != '\n')
		continue;
	if (getchar() != 'y')
		i--;
	return i;
}

int getseed(int num)
{
	int bracketchoice;
	int bracketseed;

	printf("\nPlease choose amount of players you would like to seed into the bracket:\n"
		"4\t\t\t8\n"
		"16\t\t\t32\n"
		"64\t\t\t128\n"
		"remember, there are %d initial players\n", num);
	scanf("%d", &bracketchoice);
	switch(bracketchoice){
		case 4:
			bracketseed = 4;
		break;
		case 8:
			bracketseed = 8;
		break;
		case 16:
			bracketseed = 16;
		break;
		case 32:
			bracketseed = 32;
		break;
		case 64:
			bracketseed = 64;
		break;
		case 128:
			bracketseed = 128;
		break;
	}
	return bracketseed;
}

bool IsPowerOfTwo(int x)
{
    return (x & (x - 1)) == 0;
}

int gettags(int * add, int num)
{
	printf("Smashtag for player %d\n", num +1);
	scanf("%5s", add);
	while (getchar() != '\n')
		continue;
	return 0;	
}