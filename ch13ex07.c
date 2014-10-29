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
	int ch1, ch2;

	FILE *file1, *file2;
	if (argc != 3)
	{
		puts("I need 2 arguments nigga!\007");
		exit(0);
	}
	if ((file1 = fopen(argv[1],"r")) == NULL)
	{
		printf("%s seems to be an invalid file; go back to school maybe?", argv[1]);
		exit(2);
	}
	if ((file2 = fopen(argv[2], "r")) == NULL)
	{
		printf("%s seems to be an invalid file; go back to school maybe?", argv[2]);
		exit(2);
	}

	ch1 = getc(file1);
	ch2 = getc(file2);

	while (ch1 != EOF || ch2 != EOF)
    {
        while (ch1 != EOF && ch1 != '\n') /* skipped after EOF reached */
        {
            putchar(ch1);
            ch1 = getc(file1);
        }
        if (ch1 != EOF)
        {
            putchar('\n');
            ch1 = getc(file1);
        }
        while (ch2 != EOF && ch2 != '\n') /* skipped after EOF reached */
        {
            putchar(ch2);
            ch2 = getc(file2);
        }
        if (ch2 != EOF)
        {
            putchar('\n');
            ch2 = getc(file2);
        }
    }

	if (fclose(file1) != 0)
        printf("Could not close file %s\n", argv[1]);    
    if (fclose(file2) != 0)
        printf("Could not close file %s\n", argv[2]);

	return 0;

}