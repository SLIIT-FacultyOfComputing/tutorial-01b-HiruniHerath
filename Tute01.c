/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) 
{
  //varriables
  int m1,m2,t,avg;
  printf("input the mark of subject 1 :"); //inputs
  scanf("%d",&m1);
  
  printf("input the mark of subject 2 :"); //inputs
  scanf("%d",&m2);
//calculation
   t=m1+m2;
   avg=t/2;
   printf("avg is %d\n",avg); //output

  return 0;
}


