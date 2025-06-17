#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int mat[MAX_SIZE][MAX_SIZE], i, j, sum = 0;
  int m = 3, n = 3;
  // Input elements of the matrix
  printf("Enter elements for a 3x3 matrix:\n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }
  // Prints matrix
  printf("Entered Matrix:\n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}