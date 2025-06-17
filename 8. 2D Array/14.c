#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE];
  int i, j, flag = 0, n;

  // Input required dimension
  printf("Enter the dimension for a square matrix (n x n):");
  scanf("%d", &n);

  // Input elements in matrix A from user
  printf("Enter elements in the matrix:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &A[i][j]);
    }
  }

  // Finds transpose of matrix A
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      // Store each row of matrix A to each column of matrix B
      B[i][j] = A[j][i];
    }
  }

  // Check whether matrix A is equal to its transpose or not
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      // If matrix A is not equal to its transpose
      if (A[i][j] != B[i][j])
      {
        flag = 1;
        break;
      }
    }
  }

  // If the given matrix is symmetric.
  if (flag == 0)
    printf("\nYes. The given matrix is Symmetric.\n");
  else
    printf("\nNo. The given matrix is not Symmetric.\n");

  return 0;
}