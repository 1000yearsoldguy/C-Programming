#include <stdio.h>
void InputMatrix(int M[3][5])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      scanf("%d", &M[i][j]);
    }
  }
}

void ShowMatrix(int M[3][5])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d ", M[i][j]);
    }
    printf("\n");
  }
}
void ScalarMultiply(int M[3][5], int s)
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      M[i][j] = s * M[i][j];
    }
  }
}

int main()
{
  int mat[3][5], s;

  printf("Input a 3x5 matrix:\n");
  InputMatrix(mat);

  printf("\nInput a number to multiply the matrix:");
  scanf("%d", &s);

  printf("\nInputed matrix:\n");
  ShowMatrix(mat);

  printf("Matrix after multiplied by %d:\n", s);
  ScalarMultiply(mat, s);
  ShowMatrix(mat);
  return 0;
}
