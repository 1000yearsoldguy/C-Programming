#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int matA[MAX_SIZE][MAX_SIZE], matB[MAX_SIZE][MAX_SIZE], matC[MAX_SIZE][MAX_SIZE];
  int i, j, n, m;

  // Input required dimension
  printf("Enter the dimension of the matrix (m x n):");
  scanf("%d %d", &m, &n);

  // Input elements of the A matrix
  printf("\nEnter the elements of the A matrix:\n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &matA[i][j]);
    }
  }
  // Input elements of the B matrix
  printf("\nEnter the elements of the B matrix:\n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &matB[i][j]);
    }
  }
  // Calculate their summation
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      matC[i][j] = matA[i][j] + matB[i][j];
    }
  }
  // Print C matrix
  printf("\nMatrix A + Matrix B is\n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d ", matC[i][j]);
    }
    printf("\n");
  }
  return 0;
}