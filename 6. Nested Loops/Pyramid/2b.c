/******************************************
 * Question: Pyramid-2(b). WAP that will
 * print a pattern based on the input
 * integer n. Please see the sample
 * input output.
 *
 * Sample Input        Sample Output
 * ------------        -------------
 *         5            A
 *                     ABC
 *                    ABCDE
 *                   ABCDEFG
 *                  ABCDEFGHI
 * -------------------------------------
 *         3            A
 *                     ABC
 *                    ABCDE
 ******************************************/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= n - row; col++)
    {
      printf(" ");
    }
    for (col = 1; col <= 2 * row - 1; col++)
    {
      printf("%c", col + 64);
    }
    printf("\n");
  }
  return 0;
}