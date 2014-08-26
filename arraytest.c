#include <stdio.h>
int main(void)
{
	int zero;
	int one[10];
	int two[10][10];
	int three[10][10][10];
	int four[10][10][10][10];

	printf("\n");
	printf("zero      %p\n"
		   "zero + 1  %p\n\n", &zero, &zero + 1);
	printf("one       %p\n"
		   "one + 1   %p\n\n", one, one + 1);
	printf("two       %p\n"
		   "two + 1   %p\n\n", two, two + 1);
	printf("three     %p\n"
		   "three + 1 %p\n\n", three, three + 1);
	printf("four      %p\n"
		   "four + 1  %p\n\n", four, four + 1);

	printf("sizeof zero .. %lu\n", sizeof zero);
	printf("sizeof one ... %lu\n", sizeof one);
	printf("sizeof two ... %lu\n", sizeof two);
	printf("sizeof three . %lu\n", sizeof three);
	printf("sizeof four .. %lu\n\n", sizeof four);

	printf("sizeof four ..... %lu\n", sizeof four);
	printf("sizeof *four .... %lu\n", sizeof *four);
	printf("sizeof **four ... %lu\n", sizeof **four);
	printf("sizeof ***four .. %lu\n", sizeof ***four);
	printf("sizeof ****four . %lu\n\n", sizeof ****four);

	printf("&one + 1 ..... %p\n", &one + 1);
	printf("&*one + 1 .... %p\n\n", &*one + 1);

	printf("&two + 1 ..... %p\n", &two + 1);
	printf("&*two + 1 .... %p\n", &*two + 1);
	printf("&**two + 1 ... %p\n\n", &**two + 1);
	
	printf("&three + 1 ..... %p\n", &three + 1);
	printf("&*three + 1 .... %p\n", &*three + 1);
	printf("&**three + 1 ... %p\n", &**three + 1);
	printf("&***three + 1 .. %p\n\n", &***three + 1);

	printf("&four + 1 ..... %p\n", &four + 1);
	printf("&*four + 1 .... %p\n", &*four + 1);
	printf("&**four + 1 ... %p\n", &**four + 1);
	printf("&***four + 1 .. %p\n", &***four + 1);
	printf("&****four + 1 . %p\n\n", &****four + 1);

	printf("four ............. %p\n", four);
	printf("four[1] .......... %p\n", four[1]);
	printf("four[1][1] ....... %p\n", four[1][1]);
	printf("four[1][1][1] .... %p\n", four[1][1][1]);
	printf("four[1][1][1][1] . %p\n\n", &four[1][1][1][1]);

	printf("&four     %p, &three - 1 %p\n"
		   "&four + 1 %p, &three     %p\n"
		   "&four - 1 %p, &three + 1 %p\n\n", &four, &three - 1, &four + 1, &three, &four - 1, &three + 1);


	return 0;
}