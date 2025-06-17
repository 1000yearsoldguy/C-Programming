/*
WAP that will print a pattern based on the input integer n. Please see the sample input output.
// Printing odd numbers at the odd positions in ascending order.

    Sample Input        Sample Output
    ------------        -------------
          3             3_1
                        3_1
                        3_1
    -------------------------------------
          5             5_3_1
                        5_3_1
                        5_3_1
                        5_3_1
                        5_3_1
*/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = n; col >= 1; col--)
    {
      if (col % 2 != 0)
        printf("%d", col);
      else
        printf("_");
    }
    printf("\n");
  }
  return 0;
}