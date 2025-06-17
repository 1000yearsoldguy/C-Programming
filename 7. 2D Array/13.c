#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int mat[MAX_SIZE][MAX_SIZE], i, j, m, n;

  // Input required dimension
  printf("Enter the dimension of the matrix (m x n):");
  scanf("%d %d", &m, &n);

  // Input elements of the matrix
  printf("\nEnter the elements of the matrix:\n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }
  printf("\nReversed Matrix:\n");
  for (i = 0; i < m; i++)
  {
    for (j = n - 1; j >= 0; j--)
    {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}