#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int mat[MAX_SIZE][MAX_SIZE], i, j, n, m, sum = 0;
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
  // Prints matrix
  printf("\nRow-wise: ");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d ", mat[i][j]);
    }
  }
  printf("\nColumn-wise: ");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d ", mat[j][i]);
    }
  }
  return 0;
}