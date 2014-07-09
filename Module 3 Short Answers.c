1.	a.if(a == b)
	b.if(I != J)
	c.if(m * m > 5)
	d.if(x > 5 || y < 10)
	e.if(A >= 0 && B <= 5)
2.
	#include <stdio.h>
	int main(void)
	{
		int num = 20;
		while(num >= 0)
			printf("%d\n", num--);
		return 0;
	}

3.
	for (num = 0; num < 10; num++, printf("%d\n", num));
4.	
		if (tot_hrs <= 40)
			grs_incm = tot_hrs * rate_per_hr;
		else
			grs_incm = (rate_per_hr * 40) + ((tot_hrs - 40) * rate_per_hr * 1.5);
5.
		(tot_hrs <= 40) ? (grs_incm = tot_hrs * rate_per_hr) : (grs_incm = (rate_per_hr * 40) + ((tot_hrs - 40) * rate_per_hr * 1.5));
6.
		overtime = tot_hrs > 40;
		switch(overtime){
			case 0: grs_incm = tot_hrs * rate_per_hr;
			break;
			case 1:	grs_incm = (rate_per_hr * 40) + ((tot_hrs - 40) * rate_per_hr * 1.5);
			break;
		}

7.	a. true //12 + 5 > 7 could also be read as (12+5)>7 or 17 > 7
	b. true //non zero is true
	c. false //the ascii codes for an upper case A start at 65, and I know lowercase letters are after the uppercaseones.
	//So there is no way 'x' is bigger than 25.