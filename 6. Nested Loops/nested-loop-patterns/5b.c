/*
WAP that will print a pattern based on the input integer n. Please see the sample input output.
// Printing numbers in ascending order.

    Sample Input        Sample Output
    ------------        -------------
          3             3 2 1
                        3 2 1
                        3 2 1
    -------------------------------------
          5             5 4 3 2 1
                        5 4 3 2 1
                        5 4 3 2 1
                        5 4 3 2 1
                        5 4 3 2 1
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
      printf("%d ", col);
    }
    printf("\n");
  }
  return 0;
}