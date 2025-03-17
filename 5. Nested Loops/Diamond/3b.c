/***********************************************
 Diamond-3(b). WAP that will print a pattern based on the input integer n. Please see the sample input output.

 Sample Input		Sample Output
 ------------		-------------
      5			          A
                     BBB
                    CCCCC
                   DDDDDDD
                  EEEEEEEEE
                   DDDDDDD
                    CCCCC
                     BBB
                      A
 -------------------------------------
      3			          A
                     BBB
                    CCCCC
                     BBB
                      A
 ***********************************************/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);

  // Prints Pyramid
  for (row = 1; row <= n; row++)
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

  // Prints Reverse Pyramid
  for (row = n - 1; row >= 1; row--)
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