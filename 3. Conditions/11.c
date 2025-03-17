#include <stdio.h>
int main()
{
  float marks;
  printf("Input marks:");
  scanf("%f", &marks);

  if (marks >= 90 && marks <= 100)
    printf("Grade: A\n");
  else if (marks >= 86 && marks <= 89)
    printf("Grade: A-\n");
  else if (marks >= 82 && marks <= 85)
    printf("Grade: B+\n");
  else if (marks >= 78 && marks <= 81)
    printf("Grade: B\n");
  else if (marks >= 74 && marks <= 77)
    printf("Grade: B-\n");
  else if (marks >= 70 && marks <= 73)
    printf("Grade: C+\n");
  else if (marks >= 66 && marks <= 69)
    printf("Grade: C\n");
  else if (marks >= 62 && marks <= 65)
    printf("Grade: C-\n");
  else if (marks >= 58 && marks <= 61)
    printf("Grade: D+\n");
  else if (marks >= 55 && marks <= 57)
    printf("Grade: D\n");
  else if (marks <= 54)
    printf("Grade: F\n");
  else
    printf("\nInvalid marks\n");

  return 0;
}