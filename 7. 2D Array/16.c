#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of arra
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
  // Calculate the addition of the matrix
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      sum = sum + mat[i][j];
    }
  }
  // Print the acquired sum
  printf("\nSum = %d\n", sum);

  return 0;
}