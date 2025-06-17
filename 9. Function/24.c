#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
void InputMatrix(int mat[MAX_SIZE][MAX_SIZE], int m, int n)
{
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }
}

void ShowMatrix(int mat[MAX_SIZE][MAX_SIZE], int m, int n)
{
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}
void ScalarMultiply(int mat[MAX_SIZE][MAX_SIZE], int s, int m, int n)
{
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      mat[i][j] = s * mat[i][j];
    }
  }
}

int main()
{
  int mat[MAX_SIZE][MAX_SIZE], s, m, n;

  printf("Input dimensions for M x N:", m, n);
  scanf("%d%d", &m, &n);
  printf("Input a %dx%d matrix:\n", m, n);
  InputMatrix(mat, m, n);

  printf("\nInput a number to multiply the matrix:");
  scanf("%d", &s);

  printf("\nInputed matrix:\n");
  ShowMatrix(mat, m, n);

  printf("Matrix after multiplied by %d:\n", s);
  ScalarMultiply(mat, s, m, n);
  ShowMatrix(mat, m, n);
  return 0;
}