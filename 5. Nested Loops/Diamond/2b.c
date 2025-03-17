/***********************************************
 Diamond-2(b). WAP that will print a pattern based on the input integer n. Please see the sample input output.

 Sample Input		Sample Output
 ------------		-------------
      5			        A
                   ABC
                  ABCDE
                 ABCDEFG
                ABCDEFGHI
                 ABCDEFG
                  ABCDE
                   ABC
                    A
 -------------------------------------
      3			        A
                   ABC
                  ABCDE
                   ABC
                    A
 ***********************************************/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);

  // Print Pyramid
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

  // Print Reverse Pyramid
  for (row = n - 1; row >= 1; row--)
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