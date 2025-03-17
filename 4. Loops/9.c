#include <stdio.h>
#define MAX_SIZE 100 // Defines the size of array

struct Students
{
  float A, HW, CT, MT, TF;
};

int main()
{
  struct Students student[MAX_SIZE];
  int n, i;

  printf("How many students marks you want to input? : ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("\nEnter the marks of Attendance, Assignments, Class Tests, Midterm, Final for Student %d:\n", i + 1);
    scanf("%f%f%f%f%f", &student[i].A, &student[i].HW, &student[i].CT, &student[i].MT, &student[i].TF);
  }

  for (i = 0; i < n; i++)
  {
    float percentage = student[i].A + student[i].HW + student[i].CT + (student[i].MT * 0.6) + (student[i].TF * 0.4); // 30/50 = 0.6; 40/100 = 0.4

    printf("Student %d:", i + 1);
    if (percentage >= 90 && percentage <= 100)
      printf(" A\n");
    else if (percentage >= 86 && percentage <= 89)
      printf(" A-\n");
    else if (percentage >= 82 && percentage <= 85)
      printf(" B+\n");
    else if (percentage >= 78 && percentage <= 81)
      printf(" B\n");
    else if (percentage >= 74 && percentage <= 77)
      printf(" B-\n");
    else if (percentage >= 70 && percentage <= 73)
      printf(" C+\n");
    else if (percentage >= 66 && percentage <= 69)
      printf(" C\n");
    else if (percentage >= 62 && percentage <= 65)
      printf(" C-\n");
    else if (percentage >= 58 && percentage <= 61)
      printf(" D+\n");
    else if (percentage >= 55 && percentage <= 57)
      printf(" D\n");
    else if (percentage < 55)
      printf(" F\n");
    else
      printf(" Not Specified.\n");
  }

  return 0;
}