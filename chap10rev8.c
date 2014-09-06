#include <stdio.h>
int main(void){
	//a.
	int bar[6] = {1,2,4,8,16,32};
	//b.
	printf("\n\nA: int bar[6] = {1,2,4,8,16,32};\n"
		"Use array notation to represent the third element (the one with the value 4) of the array.\n"
		"B: bar[2] = %d\n", bar[2]);
	//c.
	int hundred[100] = {[99] = -1};
	printf("int hundred[100] = {[99] = -1};\nC: last element of hundred is %d\n\n\n", hundred[99]);

	return 0;
}