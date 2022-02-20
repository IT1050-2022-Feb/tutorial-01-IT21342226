/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() { //begining of main fuction
  
  int n, x=2, sum =0;//daeclaring variables

  printf("Enter the number to calculate the sum upto :");
  scanf("%d", & n);

  printf("sum = 1");
  
  do //using of do/while loop
    {
     printf("+%d", x);
      sum = sum + x;
      x++;
      
    }while (x != n+1);// end of do/while loop

  printf(" = %d", sum+1);
  
  return 0;
} //end of main fuction

