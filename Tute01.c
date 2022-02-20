/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() { //begining of main function
  int marks1, marks2, total=0, subNo=1; 
  float average;//declare variabls

  printf("Enter the marks of subject %d :", subNo++); 
  scanf("%d", & marks1);

  printf("Enter the marks of subject %d :", subNo++); 
  scanf("%d", & marks2);
  puts ("");
  
  total = marks1 + marks2 ;//calculation
  average= total/2;//calculation

  printf("Total marks is :%d\n", total);
  printf("Average is : %.2f", average);
  
  return 0;
}//end of main function

