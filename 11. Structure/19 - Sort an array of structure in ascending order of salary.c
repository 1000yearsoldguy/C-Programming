/*
Sort an array of structure in ascending order of salary.
*/

#include <stdio.h>
struct Employee
{
  int id;
  char name[50];
  int salary;
};
int main()
{
  struct Employee employees[100], temp;
  int n, i, j;
  printf("How many persons info you want to input:");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    scanf("%d", &employees[i].id);
    fflush(stdin); // Removes the new line(\n) of previously used "scanf". Also, could be used "getchar()".
    gets(employees[i].name);
    scanf("%d", &employees[i].salary);
  }
  // Sorts in ascending order
  for (i = 0; i < n; i++)
  {
    // Place currently selected element array[i] to its correct place.
    for (j = i + 1; j < n; j++)
    {
      // Swap if currently selected array element is not at its correct position.
      if (employees[i].salary > employees[j].salary)
      {
        temp = employees[i];
        employees[i] = employees[j];
        employees[j] = temp;
      }
    }
  }

  for (i = 0; i < n; i++)
  {
    printf("%d %s %d\n", employees[i].id, employees[i].name, employees[i].salary);
  }
  return 0;
}