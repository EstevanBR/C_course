/*
Write a declaration, including arguments and result, for a two-dimensional version of strlen,
that is, a function that receives an array of pointers to char and an array of size_tintegers,
and an int that specifies the number of elements in each array. (You don't need to write the
actual function.)
*/

#include <stdio.h>
#include <string.h>
size_t strlen2d(int row, int col, const char str[row][col]);
int main(void)
{
	const int name = 3;
	const int letters = 10;
	char puppy[name][letters] =
	{
		{"Bogart"},
		{"momo"},
		{"rocky"}
	};


	printf("puppy0 = %lu\npuppy1 = %lu\npuppy2 = %lu\n", strlen(puppy[0]), strlen(puppy[1]), strlen(puppy[2]));
	size_t total;
	total = strlen2d(name, letters, puppy);
	printf("total = %zu\n", total);



	return 0;
}

size_t strlen2d(int row, int col, const char str[row][col])
{
	int i;
	int j;
	int total = 0;
	for(i = 0; i < row; i++)
	{
		total += strlen(str[i]);
	}

	return total;
}