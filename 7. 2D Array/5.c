#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int mat[MAX_SIZE][MAX_SIZE];
  int i, j, size, sum = 0;
  printf("Enter the size of the matrix:");
  scanf("%d", &size);

  printf("\nIdentity Matrix:\n");
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      if (i == j)
      {
        mat[i][j] = 1;
        printf("%d ", mat[i][j]);
      }
      else
      {
        mat[i][j] = 0;
        printf("%d ", mat[i][j]);
      }
    }
    printf("\n");
  }

  return 0;
}