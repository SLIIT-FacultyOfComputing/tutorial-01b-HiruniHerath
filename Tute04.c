/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
//function declaration
int minimum( int no1 ,int no2);
int maximum (int no1 , int no2);
int multiply (int no1, int no2);

//main function
int main() {
 int no1, no2;
 printf("Enter a value for no 1 : ");
 scanf("%d", &no1);
 printf("Enter a value for no 2 : ");
 scanf("%d", &no2);
 printf("%d ", minimum(no1, no2));//calling function
 printf("%d ", maximum(no1, no2));
 printf("%d ", multiply(no1, no2));
 return 0;
}
//calculation 1
int minimum( int no1 ,int no2)
{
  if (no1 < no2)
  {
    return no1;
  }
else
{
  return no2;
}

} 
//calculation 2
int maximum (int no1 , int no2)
{
  if (no1 < no2)
  {
    return no2;
  }
else
{
  return no1;
}
}
//calculation 3
int multiply (int no1, int no2)
{
  int x;
  x= no1* no2;
  return x;
}
