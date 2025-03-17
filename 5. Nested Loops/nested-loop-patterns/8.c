/*
WAP that will print a pattern based on the input integer n. Please see the sample input output.

    Sample Input        Sample Output
    ------------        -------------
          5             1 0 1 0 1
                        0 1 0 1 0
                        1 0 1 0 1
                        0 1 0 1 0
                        1 0 1 0 1
    -------------------------------------
          3             1 0 1
                        0 1 0
                        1 0 1
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
        printf("1 ");
      else
        printf("0 ");
    }
    printf("\n");
  }
  return 0;
}