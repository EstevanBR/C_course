/* count.c -- using standard I/O */
#include <stdio.h>
#include <stdlib.h> // ANSI C exit() prototype
#include <string.h>
int main(void)
{
    int ch;         // place to store each character as read
    FILE *fp;       // "file pointer"
    long count = 0;
    char fname[256];

    printf("Please enter the file name:\n");
    fgets(fname, 256, stdin);
    fname[strlen(fname)-1] = '\0';
    if ((fp = fopen(fname, "r")) == NULL)
    {
        printf("Can't open %s\n", fname);
        exit(1);
    }
    puts("********");
    while ((ch = getc(fp)) != EOF)
    {
       putc(ch,stdout);  // same as putchar(ch);
       count++;
    }
    fclose(fp);
    puts("\n********");
    printf("File \"%s\" has %ld characters\n", fname, count);

    return 0; 
}