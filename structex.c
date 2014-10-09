#include <stdio.h>
struct person  {
   char name[30];
   int age;
   float weight;
};

int main(void)
{
   struct person patient;

   patient.name = "Mary Lee";
   patient.age = 27;
   patient.weight = 124.8;

   printf("Name = %s \n",  patient.name);
   printf("Age = %d \n",  patient.age);
   printf("Weight = %f \n",  patient.weight);
 
   return 0;
 }