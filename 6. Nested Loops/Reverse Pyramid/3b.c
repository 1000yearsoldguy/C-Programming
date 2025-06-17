/***********************************************
 * Question: Reverse Pyramid-3(b). WAP that will print a pattern based on the input integer n.
 * Please see the sample input output.
 *
 * Sample Input        Sample Output
 * ------------        -------------
 *         5          EEEEEEEEE
 *                     DDDDDDD
 *                      CCCCC
 *                       BBB
 *                        A
 * -------------------------------------
 *         3          CCCCC
 *                     BBB
 *                      A
 ***********************************************/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = n; row >= 1; row--)
  {
    for (col = 1; col <= n - row; col++)
    {
      printf(" ");
    }
    for (col = 1; col <= 2 * row - 1; col++)
    {
      printf("%c", row + 64);
    }
    printf("\n");
  }
  return 0;
}