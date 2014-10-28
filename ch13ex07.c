/*
Write a program that opens two files.

You can obtain the filenames either by using command-line arguments or by soliciting the user to enter them.
	
	a. Have the program print line 1 of the first file, line 1 of the second file, line 2 of the first file,
	line 2 of the second file, and so on, until the last line of the longer file (in terms of lines) is printed.

	b. Modify the program so that lines with the same line number are printed on the same line.
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	long i;
	int line1[256], line2[256];
	long size1;
	long size2;

	FILE *file1, *file2;
	if (argc != 3)
	{
		puts("I need 2 arguments nigga!\007");
		exit(0);
	}
	if ((file1 = fopen(argv[1],"r")) == NULL || (file1 = fopen(argv[2],"r")) == NULL)
	{
		printf("I'm no doctor, but %s or %s seems to be an invalid file; go back to school maybe?", argv[1], argv[2]);
		exit(2);
	}

	//I want to use code that uses SEEK_SET + sizeof(char) to increment the character being printed by 1 until a new line is encountered
	fseek(file1, 0L, SEEK_END);
	size1 = ftell;
	fseek(file2, 0L, SEEK_END);
	size2 = ftell;
	fseek(file1, 0L, SEEK_SET);
	fseek(file2, 0L, SEEK_SET);

	for(i = 0L; i <= size2 || i<=size1; i+=1L)
	{
		fseek(file1, +i, SEEK_SET);
		fseek(file2, +i, SEEK_SET);
		line1 = gets(file1);
		line2 = gets(file2);

	}



	fclose(file1);
	fclose(file2);
	return 0;

}