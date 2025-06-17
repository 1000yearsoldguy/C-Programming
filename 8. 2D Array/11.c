#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int row, col, n, mat[MAX_SIZE][MAX_SIZE], sum = 0;

  // Inputs required dimension
  printf("Enter the dimension of the matrix (n x n):");
  scanf("%d", &n);

  // Inputs element of the matrix
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

  // Summation of the targeted elements
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= n; col++)
    {
      if (
          ((col < (n / 2) + 1) && row == 1) || ((row < (n / 2) + 1) && col == n) || // Logic for 1st & 2nd Upper Portion
          ((row > (n / 2) + 1) && col == 1) || ((col > (n / 2) + 1) && row == n) || // Logic for 1st & 2nd Lower Portion
          (row == (n / 2) + 1) || (col == (n / 2) + 1)                              // Logic for Middle Rows & Columns
      )
        sum = sum + mat[row][col];
    }
  }
  printf("\n\nSum : %d", sum);
}