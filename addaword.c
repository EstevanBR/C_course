/* addaword.c -- uses fprintf(), fscanf(), and rewind() */
#include <stdio.h>
#include <stdlib.h>
#define MAX 40

int main(void)
{
    FILE *fp; //declares file pointer
    char words[MAX]; //initializes array

    if ((fp = fopen("wordy", "a+")) == NULL) //open file in append read/write mode and if null, throw the following errors
    {
        fprintf(stdout,"Can't open \"words\" file.\n");
        exit(1);
    }

    puts("Enter words to add to the file; press the Enter");
    puts("key at the beginning of a line to terminate.");
    while (gets(words) != NULL  && words[0] != '\0') //while gets does not return null or EOF and words is not a null char
    fprintf(fp, "%s ", words); //print the string from the file into the array words

    puts("File contents:");
    rewind(fp); /* go back to beginning of file */
    while (fscanf(fp,"%s",words) == 1)
        puts(words);

    if (fclose(fp) != 0)
        fprintf(stderr,"Error closing file\n");

    fp = fopen("wordy", "r");
    printf("%p\n", fp);
    fclose(fp);

    fp = fopen("wordy", "a+");
    printf("%p", fp);
    fclose(fp);

    return 0;
}