#include <stdio.h>
#include <string.h>
#define SHIPCHARGE 2.75 
int main(void)
{
	float length = 2.0, width = 3.0, height = 4.0;
	float surface_area;
	float area;
	float result;
	float Fahrenheit;
	int a = 1, b = 1;
	float Centigrade;
	float volume;

	result = (a + 5) / (b - 3);
	area = length * width;
	Fahrenheit = 1.8 * Centigrade + 32.0;
	volume = length * width * height;
	surface_area = 2 * length * width + 2 * width * height + 2 * length * height;

	printf("%.2f\n", surface_area);

	return 0;
}

/*
Write a preprocessor define for the shipping charge on one box of freight (assume it is 2.75).
Write a C statement that uses this defineto calculate the total freight charge for the number
of boxes stored in box_cnt, and place the result in tot_shp_cost*/


//surface_area = 2 * length * width + 2 * width * height + 2 * length * height;

