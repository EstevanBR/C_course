/*
Modify the program in Listing 13.3
so that each word is numbered according to the order in which it was added to the list,
starting with 1.
Make sure that, when the program is run a second time,
new word numbering resumes where the previous numbering left off.
*/
/*
addaword.c -- uses fprintf(), fscanf(), and rewind()
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 40

int main(void)
{
    FILE *fp;
    char words[MAX];
    
    
    int i;
    

    if ((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stdout,"Can't open \"words\" file.\n");
        exit(1);
    }

    fseek(fp, -2L, SEEK_END);
    fscanf(fp, "%d", &i);
    printf("i is %d ok?!\n", i);

    puts("Enter words to add to the file; press the Enter");
    puts("key at the beginning of a line to terminate.");
    while (gets(words) != NULL  && words[0] != '\0')
        fprintf(fp, "%s %d\b", words, i++);

    puts("File contents:");
    rewind(fp);           /* go back to beginning of file */
    while (fscanf(fp,"%s",words) == 1)
        puts(words);

    if (fclose(fp) != 0)
        fprintf(stderr,"Error closing file\n");

    return 0;
}