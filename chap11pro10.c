/*
chap11pro10.c

10:	
Write a program that reads in up to 10 strings or to EOF, whichever comes first.

Have it offer the user a menu with five choices:

print the original list of strings,
print the strings in ASCII collating sequence,
print the strings in order of increasing length,
print the strings in order of the length of the first word in the string,
and quit.

Have the menu recycle until the user enters the quit request.
The program, of course, should actually perform the promised tasks.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAXSTR 10
int getstrings(char str[MAXSTR][100]);
char menu(void);
void print_org(int n, char str[MAXSTR][100]);
void print_asc(int n, char str[MAXSTR][100]);
void print_len(int n, char str[MAXSTR][100]);
void print_wrd(int n, char str[MAXSTR][100]);
char choi_val(char c);
int main(void)
{
	char str[MAXSTR][100];
	char choice = 0;
	int i;
	int ch;
	int n;
	n = getstrings(str);
	printf("n = %d\n", n);
	/*for(i = 0 ; i<n ; i++)
	{
		puts(str[i]);
	}
	*/
	while(choice != 'q')
	{
		choice = 0;
		printf("Choose an operation\n");
		printf("\ta: print the original list of strings,\n"
			   "\tb: print the strings in ASCII collating sequence,\n"
			   "\tc: print the strings in order of increasing length,\n"
			   "\td: print the strings in order of the length of the first word in the string,\n"
			   "\te: and quit.\n");
		choice = choi_val(choice);

		printf("Choice is %hhd\n", choice);
		switch(choice){
			case 'a': print_org(n, str);
			break;
			case 'b': print_asc(n, str);
			break;
			case 'c': print_len(n, str);
			break;
			case 'd': print_wrd(n, str);
			break;
			case 'e': continue;
			break;
			default: break;
		}
		while(isspace(getchar()) != 1)
			continue;
	}
	printf("Done.\n");
	return 0;
}

int getstrings(char str[MAXSTR][100])
{
	int i = 0;
	int j;
	char *pw;
	printf("Please enter up to 10 strings or press control+D\n");
	for(i=0; ((gets(str[i])) != '\0') && i<MAXSTR; i++);
	//flush
	if(i < 9)
	{
		while(getchar() == -1)
			continue;
	}

	return i-1;
}

/*char menu(void)
{
	char choice;
	printf("Choose an operation\n");
	printf("a: print the original list of strings,\n"
		   "b: print the strings in ASCII collating sequence,\n"
		   "c: print the strings in order of increasing length,\n"
		   "d: print the strings in order of the length of the first word in the string,\n"
		   "e: and quit.\n");

	choice = getchar();
	return choice;
}
*/
void print_org(int n, char str[MAXSTR][100])
{
	int i;
	for(i = 0 ; i<n ; i++)
	{
		puts(str[i]);
	}
}
void print_asc(int n, char str[MAXSTR][100])
{
	char *temp[n];
	char *pr;
	char *pw;
	int i;
	int j;

}
void print_len(int n, char str[MAXSTR][100])
{

}
void print_wrd(int n, char str[MAXSTR][100])
{

}

char choi_val(char c)
{
	if (c != 'a' && c != 'b' && c != 'c' && c != 'd' && c != 'e')
	{
		printf("please enter a valid choice\n");
		c = getchar();
	}
	return c;
}