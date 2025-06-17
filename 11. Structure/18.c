#include <stdio.h>
struct Students
{
  int id;
  float cgpa;
  char name[50];
};
int main()
{
  struct Students stud[100], temp;
  int n, i, j;
  printf("How many persons info you want to input:");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    scanf("%d%f", &stud[i].id, &stud[i].cgpa);
    fflush(stdin); // Removes the new line(\n) of previously used "scanf". Also, could be used "getchar()".
    gets(stud[i].name);
  }
  // Sorts in ascending order
  for (i = 0; i < n; i++)
  {
    // Place currently selected element array[i] to its correct place.
    for (j = i + 1; j < n; j++)
    {
      // Swap if currently selected array element is not at its correct position.
      if (stud[i].cgpa > stud[j].cgpa)
      {
        temp = stud[i];
        stud[i] = stud[j];
        stud[j] = temp;
      }
    }
  }

  for (i = 0; i < n; i++)
  {
    if (stud[i].cgpa == stud[n - 1].cgpa)
    {
      printf("%d %.2f %s\n", stud[i].id, stud[i].cgpa, stud[i].name);
    }
  }
  return 0;
}