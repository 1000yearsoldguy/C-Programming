#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int row, col, n, mat[MAX_SIZE][MAX_SIZE], sum = 0;

  // Input required dimension
  printf("Enter the dimension of the matrix (n x n):");
  scanf("%d", &n);

  // Input elements of the matrix
  printf("\nEnter the elements of the matrix:\n");
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= n; col++)
    {
      scanf("%d", &mat[row][col]);
    }
  }

  // Prints Entered Matrix
  printf("\nEntered Matrix :\n");
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= n; col++)
    {
      printf("%d ", mat[row][col]);
    }
    printf("\n");
  }

  // Summation of First & Last Row and Major & Minor Diagonal
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= n; col++)
    {
      if (row == 1 || row == n || row == col || (row + col) == (n + 1))
      {
        sum = sum + mat[row][col];
      }
    }
  }
  printf("\n\nSum : %d", sum);
}