#include <stdio.h>
#include "happy.h"
extern char string[];
int main(void)
{
	struct joy{
		int cars = 2;
		float money = 22.5;
	}

	struct usr_form{
		char name[20] = {"Estevan"};
		int wins;
	}

	typedef struct{
		int age;
		int weight;
		char notes[100];
	}doctor;

	prntbob();
	printf("%s\n", string);

	printf("%s\n", );
	return 0;
}