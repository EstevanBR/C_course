//this program counts time. ie. 1:21 + 3:21 = 4:42
#include <stdio.h>
int main(void){
	int horus = 0; //user inputted minute int
	int isis = 0; // user inputted seconds
	int min = 0; // minutes
	int sec = 0; // seconds

	printf("Please enter minutes and seconds mm:ss\n");
	while(1)
	{
		scanf("%d %d",&horus,&isis);
		sec += (horus * 60) + isis;
		//printf("You entered %d:%d\n", horus, isis);
		if(horus == 0 && isis == 0)
			{
				printf("whoops\n");
				break;
			}
	}
	min = sec / 60;
	sec = sec % 60;
	printf("Total = %d minutes and %d seconds\n", min, sec);

	return 0;
}