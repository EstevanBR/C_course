#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	/* code */
	FILE *fp;
	float sink;
	float sum;
	int i;

	if (argc == 1)
	{
		fp = stdin;
		printf("using keyboard for input\n");
	}
	if (argc == 2)
	{
		fp = fopen(argv[1], "r");
		printf("using %s for input\n", argv[1]);
	}
	if (argc != 1 && argc != 2)
	{
		printf("needs to have 1 or 0 arguments, aborting program...\007\n");
		exit(0);
	}
	for(i = 0, sum = 0; (fscanf(fp, "%f", &sink)) != EOF; i++)
	{
		printf("i is %d\n", i);
		sum+=sink;
	}
	sum /= i;
	printf("the average is %.2f\n", sum);

	return 0;
}