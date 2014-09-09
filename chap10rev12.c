#include <stdio.h>
void trad1(int rows, double ar[rows]);
void trad2(int rows, int cols, short ar[rows][cols]);
void trad3(int rows, int cols, int tabs, long ar[tabs][rows][cols]);
int main(void)
{
	int twenty = 20, ten = 10, fifteen = 15, thirty = 30, five = 5;

	double trots[twenty];
	short clops[ten][thirty];
	long shots[five][ten][fifteen];

	trad1(twenty, trots);
	trad2(ten, thirty, clops);
	trad3(five, ten, fifteen, shots);

	return 0;
}

void trad1(int rows, double ar[rows])
{
	int r;
	double sum = 0;
	for(r = 0; r<rows; r++)
		sum += ar[r];
	printf("sum of trots is %e\n", sum);
}
void trad2(int rows, int cols, short ar[rows][cols])
{
	int r, c;
	short sum = 0;
	for(r = 0; r< rows; r++)
	{
		for(c = 0; c < cols; c++)
			sum+=ar[r][c];
	}
	printf("sum of clops is %hi\n", sum);
}
void trad3(int rows, int cols, int tabs, long ar[tabs][rows][cols])
{
	int r, c, t;
	long sum;
	for(r = 0; r<rows;r++)
	{
		for(c = 0; c<cols; c++)
		{
			for(t = 0; t<tabs; t++)
				sum+=ar[r][c][t];
		}
	}
	printf("sum of shots is %ld\n", sum);
}