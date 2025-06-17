/***********************************************
Diamond-2(a). WAP that will print a pattern based on the input integer n. Please see the sample input output.

 Sample Input		Sample Output
 ------------		-------------
      5			        1
                   123
                  12345
                 1234567
                123456789
                 1234567
                  12345
                   123
                    1
 -------------------------------------
      3			        1
                   123
                  12345
                   123
                    1
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
      printf("%d", col);
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
      printf("%d", col);
    }
    printf("\n");
  }

  return 0;
}