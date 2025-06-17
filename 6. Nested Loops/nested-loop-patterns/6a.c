/*
WAP that will print a pattern based on the input integer n. Please see the sample input output.(Here underscore(_) indicates space.)
// Printing odd numbers at the odd positions in descending order.

    Sample Input        Sample Output
    ------------        -------------
          3             1_3
                        1_3
                        1_3
    -------------------------------------
          5             1_3_5
                        1_3_5
                        1_3_5
                        1_3_5
                        1_3_5
*/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= n; col++)
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