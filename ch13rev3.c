#include <stdio.h>
int main(void)
{
	FILE * fp1,* fp2;

	char ch;

	fp1 = fopen("terky", "r");
	fp2 = fopen("jerky", "w");

	while((ch = getc(fp1)) != EOF)
	{
		fprintf(fp2,"%c\n", ch);
		putc(ch, fp2);
	}
	fclose(fp1); /* close the terky file */

	return 0;
}