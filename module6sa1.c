//	int a[5];
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a[5];
	/*FILE *point = fopen(argv[1], "wb");//alternatively, include the adata.out file in the command line when running the program.*/
	FILE *point = fopen("adata.out", "wb");
	fwrite(a, sizeof(size_t), 5, point);


	return 0;
}