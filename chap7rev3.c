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

