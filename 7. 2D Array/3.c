#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int mat[MAX_SIZE][MAX_SIZE], i, j, dmat;
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
  dmat = (mat[0][0] * ((mat[1][1] * mat[2][2]) - (mat[1][2] * mat[2][1]))) - (mat[0][1] * ((mat[1][0] * mat[2][2]) - (mat[1][2] * mat[2][0]))) + (mat[0][2] * ((mat[1][0] * mat[2][1]) - (mat[1][1] * mat[2][0])));

  if (dmat < 0)
    dmat = -1 * dmat;
  printf("\nDeterminant of the matrix, |mat| = %d", dmat);
  return 0;
}