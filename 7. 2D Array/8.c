#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int mat[MAX_SIZE][MAX_SIZE], i, j, m, n, max, r_max, c_max;

  // Input required dimension
  printf("Enter the dimension of the matrix (m x n):");
  scanf("%d %d", &m, &n);

  // Input elements of the matrix
  printf("\nEnter the elements of the A matrix:\n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }
  max = mat[0][0];
  for (i = 1; i < m; i++)
  {
    for (j = 1; j < n; j++)
    {
      if (mat[i][j] > max)
      {
        max = mat[i][j];
        r_max = i;
        c_max = j;
      }
    }
  }
  printf("Max: %d\nLocation: [%d][%d]", max, r_max, c_max);
  return 0;
}