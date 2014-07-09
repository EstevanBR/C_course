/*
#include <stdio.h>
int main(void)
{
	int num = 20;
	while(num >= 0)
		printf("%d\n", num--);
	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	int num;
	for (num = 0; num < 10; num++, printf("%d\n", num));
	return 0;
}
*/

/*#include <stdio.h>
int main(void)
{
	float rate_per_hr 	= 25.00;
	float tot_hrs		= 45.00;
	float grs_incm_wk;

	if (tot_hrs <= 40)
		grs_incm_wk = tot_hrs * rate_per_hr;
	else
		grs_incm_wk = (rate_per_hr * 40) + ((tot_hrs - 40) * rate_per_hr * 1.5);

	printf("Your gross income this week is:\t$%.2f\n", grs_incm_wk);

	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	float rate_per_hr 	= 25.00;
	float tot_hrs		= 45.00;
	float grs_incm_wk;

	(tot_hrs <= 40) ? (grs_incm_wk = tot_hrs * rate_per_hr) : (grs_incm_wk = (rate_per_hr * 40) + ((tot_hrs - 40) * rate_per_hr * 1.5));

	printf("Your gross income this week is:\t$%.2f\n", grs_incm_wk);

	return 0;
}*/

#include <stdio.h>
int main(void)
{
	float rate_per_hr 	= 25.00;
	float tot_hrs		= 45.00;
	float grs_incm_wk;
	int overtime;

	overtime = tot_hrs > 40;
	switch(overtime){
		case 0: grs_incm_wk = tot_hrs * rate_per_hr;
		break;
		case 1:	grs_incm_wk = (rate_per_hr * 40) + ((tot_hrs - 40) * rate_per_hr * 1.5);
		break;
	}

	printf("Your gross income this week is:\t$%.2f\n", grs_incm_wk);
	printf("%d\n", 'A');

	return 0;
}