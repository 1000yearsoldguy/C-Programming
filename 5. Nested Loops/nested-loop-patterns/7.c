/*
WAP that will print a pattern based on the input integer n. Please see the sample input output.(Here underscore(_) indicates space.)
// Printing stars(*) at the even positions.

    Sample Input        Sample Output
    ------------        -------------
          3             _*_
                        _*_
                        _*_
    -------------------------------------
          5             _*_*_
                        _*_*_
                        _*_*_
                        _*_*_
                        _*_*_
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
      if (col % 2 == 0)
        printf("*");
      else
        printf("_");
    }
    printf("\n");
  }
  return 0;
}