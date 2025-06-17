#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int mat[MAX_SIZE][MAX_SIZE];
  int i, j, size, sum = 0;
  printf("Enter the size of the matrix:");
  scanf("%d", &size);

  printf("\nEnter the elements of the matrix:\n");
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }

  printf("\nMajor diagonal: ");
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      if (i == j)
        printf("%d ", mat[i][j]);
    }
  }
  printf("\nMinor diagonal: ");
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      if ((i + j) == (size - 1))
        printf("%d ", mat[i][j]);
    }
  }
  return 0;
}