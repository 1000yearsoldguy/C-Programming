#include <stdio.h>
struct stud_info
{
  char name[100];
  char id[100];
  float cgpa;
};

int main()
{
  struct stud_info stud1;

  printf("Enter Name:");
  scanf("%s", stud1.name);
  printf("Enter Student ID:");
  scanf("%s", stud1.id);
  printf("Enter CGPA of the student:");
  scanf("%f", &stud1.cgpa);

  printf("\nName: %s", stud1.name);
  printf("\nStudent ID: %s", stud1.id);
  printf("\nCGPA: %f", stud1.cgpa);
  return 0;
}