#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
struct stud_info
{
  char name[100];
  char id[100];
  float cgpa;
};

int main()
{
  struct stud_info stud[MAX_SIZE];
  int i, n;
  printf("How many students info you want collect? : ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("\n\nEnter Name for Student %d: ", i + 1);
    scanf("%s", stud[i].name);
    printf("Enter Student ID of the Student %d: ", i + 1);
    scanf("%s", stud[i].id);
    printf("Enter CGPA of the student %d: ", i + 1);
    scanf("%f", &stud[i].cgpa);
  }

  for (i = 0; i < n; i++)
  {
    printf("\n\nStudent %d: %s", i + 1, stud[i].name);
    printf("\nStudent ID: %s", stud[i].id);
    printf("\nCGPA: %.2f", stud[i].cgpa);
  }
  return 0;
}