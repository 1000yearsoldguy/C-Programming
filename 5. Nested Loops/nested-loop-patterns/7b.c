/*
WAP that will print a pattern based on the input integer n. Please see the sample input output.(Here underscore(_) indicates space.)
// Printing even numbers at the even positions in ascending order.

    Sample Input        Sample Output
    ------------        -------------
          3             _2_
                        _2_
                        _2_
    -------------------------------------
          5             _4_2_
                        _4_2_
                        _4_2_
                        _4_2_
                        _4_2_
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
      if (col % 2 == 0)
        printf("%d", col);
      else
        printf("_");
    }
    printf("\n");
  }
  return 0;
}