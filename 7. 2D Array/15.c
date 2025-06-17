#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int mat[MAX_SIZE][MAX_SIZE], i, j, n, m, p, q, temp, flag;

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

  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      temp = mat[i][j];
      flag = 0;
      for (p = 0; p < m; p++)
      {
        for (q = 0; q < n; q++)
        {
          if (temp == mat[p][q])
          {
            if (0 == flag)
              flag = 1;
            else
              mat[p][q] = -1;
          }
        }
      }
    }
  }

  printf("\nMatrix after replacing all the duplicate integers by -1:\n");
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