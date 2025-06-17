#include <stdio.h>
int main()
{
  float marks;
  char grade;
  printf("Input marks: ");
  scanf("%f", &marks);
  if (marks >= 90 && marks <= 100)
    grade = 'A';
  else if (marks >= 80 && marks <= 89)
    grade = 'B';
  else if (marks >= 70 && marks <= 79)
    grade = 'C';
  else if (marks >= 60 && marks <= 69)
    grade = 'D';
  else if (marks >= 50 && marks <= 59)
    grade = 'E';
  else if (marks >= 0 && marks <= 49)
    grade = 'F';
  else
  {
    printf("\nInvalid marks\n");
    return 0;
  }
  printf("\nStudent Grade = %c\n", grade);
  return 0;
}