#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE], i, j, k, mult, sum = 0;
  int r1, c1, r2, c2;

  // Input
  printf("Enter the dimension of A matrix (m x n):");
  scanf("%d%d", &r1, &c1);

  printf("Enter elements for A matrix(%dx%d):\n", r1, c1);
  for (i = 0; i < r1; i++)
  {
    for (j = 0; j < c1; j++)
    {
      scanf("%d", &A[i][j]);
    }
  }
  // Input
  printf("Enter the dimension of B matrix (m x n):");
  scanf("%d%d", &r2, &c2);

  printf("Enter elements for B matrix(%dx%d):\n", r2, c2);
  for (i = 0; i < r2; i++)
  {
    for (j = 0; j < c2; j++)
    {
      scanf("%d", &B[i][j]);
    }
  }

  if (c1 != r2)
    printf("\nMultiplication isn't possible.");
  else
  {

    for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c2; j++)
      {
        for (k = 0; k < r2; k++)
        {
          sum = sum + A[i][k] * B[k][j];
        }
        C[i][j] = sum;
        sum = 0;
      }
    }

    printf("\nMultiplication Answer:\n");
    for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c2; j++)
      {
        printf("%d ", C[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}