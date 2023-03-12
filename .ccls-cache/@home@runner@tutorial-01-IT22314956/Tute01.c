/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1 = 0, mark2 = 0;
  double avg = 0;

  printf("Enter Subject 1 Marks : ");
  scanf("%d", &mark1);

  printf("Enter Subject 2 Marks : ");
  scanf("%d", &mark2);

  avg = (mark1 + mark2)/2.0;

  printf("Average Marks : %.2lf", avg);
  
  
  return 0;
}

