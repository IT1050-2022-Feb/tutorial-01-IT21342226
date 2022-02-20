/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int a,int b);
int maximum(int a,int b);
int multiply(int no1,int no2);

int main() { //begining of main fuction
  
   int no1, no2;//declaring variables
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}//ending of main fuction

int minimum(int a, int b)//begining of minmum fuction
{
  int result2;
  if (a < b)
  {
     result2 = a;
  }
    else if (b<a)
  {
    result2 = b;
  }
  return result2;
  }//end of minimum fuction


int maximum(int a, int b) //begining of maximum fuction
{
  int result1;
  if (a > b)
  {
    result1 = a;
  }
  else if (b>a)
  {
    result1 = b;
  }
  return result1;

}//end of maximum function
  
int multiply(int no1,int no2) //begin of multiply fuction
{
   return no1 * no2 ;
}//end of multiply fuction