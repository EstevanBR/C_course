1.		a. false
		b. true
		c. false

2.	  	a. while (number > 90 && number < 100);
		b. while (ch != 'q' || ch != 'k');
		c. while (number <= 9 && number >= 1 && number != 5)
		d. while !(number <= 9 && number >=1)

3.


#include <stdio.h>
int main(void)
{
int weight, height;  /* weight in lbs, height in inches */
printf("Please enter weight in pounds and height in inches:");
scanf("%d %d", &weight, &height);
printf("\n");

  if (weight < 100 && height > 64)
      if (height >= 72)
          printf("You are very tall for your weight.\n");
      else
          printf("You are tall for your weight.\n");
  else if (weight > 300 && height < 48)
          printf("You are quite short for your weight.\n");
  else
      printf("Your weight is ideal.\n");
  return 0;
}

4.		a. 1
		b. 0
		c. 0
		d. 6
		e. 10
		f. 0

5. 
