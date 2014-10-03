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
	char choice;
	int i;
	int n;
	n = getstrings(str);
	printf("n = %d\n", n);
	/*for(i = 0 ; i<n ; i++)
	{
		puts(str[i]);
	}
	*/
	do{
		printf("Choose an operation\n");
		printf("a: print the original list of strings,\n"
			   "b: print the strings in ASCII collating sequence,\n"
			   "c: print the strings in order of increasing length,\n"
			   "d: print the strings in order of the length of the first word in the string,\n"
			   "e: and quit.\n");
		scanf("%c", &choice);
		choice = choi_val(choice);

		printf("Choice is %c\n", choice);
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
		}
	}while(choice != 'e');
	printf("Done.\n");
	return 0;
}

int getstrings(char str[MAXSTR][100])
{
	int i;
	printf("Please enter up to 10 strings or press control+D\n");
	for(i = 0; i < MAXSTR && gets(str[i]) != '\0' ; i++)
	{
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
		c = '\0';
	return c;
}