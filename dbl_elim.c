/************************************************
    * filename: dbl_elim.c
    * Assignment: Module 3, Discussion Assignnment
    * Name: Estevan Hernandez
    * Date Created: June 25, 2014
    *
 	* a program for a double elim bracket TEST
    *************************************************/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <signal.h>
int getplayers(void);
int getsetups(void);
int check_if_odd(int num);
int iscorrect(int num);
int getseed(void);
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
	
	amountofplayers = getplayers();
	setups = getsetups();
	int poolsamountchoice[amountofplayers];
	int poolsizechoice[amountofplayers];
	char playernames[amountofplayers][11];
	char playertags[amountofplayers][6];
	int playerindex[amountofplayers][amountofplayers][amountofplayers];

	for(i = 0; i < amountofplayers; ++i)
	{
		printf("Please enter name for player %d ", i+1);
		printf("NAME: __________\b\b\b\b\b\b\b\b\b\b");
		scanf("%10s", playernames[i]);
		//i = iscorrect(i);
		while (getchar() != '\n')
			continue;
	}

	for(i = 0; i < amountofplayers; i++)
	{
		printf("Please enter smash tag for %s [player %d] ", playernames[i], i+1);
		printf("TAG: ____\b\b\b\b\b");
		scanf("%5s", playertags[i]);
		while (getchar() != '\n')
			continue;
		//i = iscorrect(i);
	}

	for(i = 0; i < amountofplayers; i++)
	{
		printf("Player %d is \"%s\" and their tag is \"%s\"\n", i+1, playernames[i], playertags[i]);
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
	
	bracketseed = getseed();

	printf("\n\nTo seed a bracket of %d players from %d initial players in the given amount of time, there needs to be:\n", bracketseed, amountofplayers);
	for (poolsindex = 0, poolsize = amountofplayers, amountofpools = 1, i = 0;
		poolsize >= 1 && (bracketseed / amountofpools) >= 1 && poolsize >= 2;
		amountofpools++, poolsindex++)
	{
		//if (amountofpools % 2 == 0 || amountofpools == 1)
		//{
			poolsize = amountofplayers / amountofpools;
			setsperpool = (poolsize * (poolsize+1))/2;
			totalpoolssets = setsperpool * amountofpools;
			poollength = (((setsperpool * bestofpools * matchtimelimit)/60)/setups);
			poolslength = (((totalpoolssets * bestofpools * matchtimelimit)/60)/setups);
			setsinbracket = ((bracketseed * 2)-1);
			bracketlength = ((setsinbracket * bestofbracket * matchtimelimit)/60/setups);
			tourneylength = poolslength + bracketlength;

			if (poolsize > 2)//&& (poolsize * amountofpools) >= amountofplayers)
			{
				printf("\nFORMAT: %c\n", (i + 'A'));
				printf("%d pools\n", amountofpools);
				printf("%d amount of players each\n", poolsize);
				printf("With the top %d players of each pool advancing to bracket\n\n", bracketseed / amountofpools);
				printf("Which would be %d max sets that must be played in each pool and take max %.2f hrs. to complete per pool\n",
					setsperpool, poollength);
				printf("Which would be %d max sets that must be played for all pools, which would take %.2f hrs. to complete before bracket is seeded\n",
					totalpoolssets, poolslength);
				printf("With %d sets in bracket, the entire tournament would take %.2f hrs.\n", setsinbracket, tourneylength);
				times[i] = tourneylength;
				i++;
			}
			
			if ((bracketseed / amountofpools) == 1)
				break;
		//}
	}
	printf("\n\nChoices of:");
	for(i = 0 ; i <= poolsindex && times[i] != 0;)
	{
		printf("\nFORMAT %c would take %.2f hours", (i + 'A'), times[i]);
		i++;
	}

	printf("\n\n\nDISCLAIMER:\nALL CALCULATIONS ARE ESITMATES AND DO NOT FACTOR IN -\n"
		"TIME TAKEN BETWEEN GAMES/SETS/MATCHES. EX: TIME TAKEN TO FIND PLAYERS.\n");
	/*POOLS MANAGER*/
	/*
	code needs to:
	manage who plays who in each pool
	keep track of who wins each set
	LATER FEATURE: keep track of stock count at the end of the match
	make sure 2 people aren't assigned to play eachother more than once
	eg: player A vs B and player B vs A don't happen
	make sure a player isn't assigned to play themselves:
	eg: player A vs player A
	*/

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

int getseed()
{
	int bracketchoice;
	int bracketseed;

	printf("\nPlease choose amount of players you would like to seed into the bracket:\n"
		"4\t\t\t8\n"
		"16\t\t\t32\n"
		"64\t\t\t128\n");
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