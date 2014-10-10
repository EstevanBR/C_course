/*
* FILENAME:   what.c
* PURPOSE:    Illustrate the use of projects/multi-file  programs.
*/

#include <stdio.h>
#include "f.h"
int main(void)
{
  float x, y;
 
  printf("Enter a float value for x  ");
  scanf("%f",&x);
  y = f(x);
  printf("f(%g) = %g\n",x,y);
  return 0;
}