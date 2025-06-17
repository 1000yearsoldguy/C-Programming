/*
WAP that will print a pattern based on the input integer n. Please see the sample input output.

    Sample Input        Sample Output
    ------------        -------------
    4                   * * * *
                        * * * *
                        * * * *
                        * * * *
    -------------------------------------
    2                   * *
                        * *
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
      printf("*");
    }
    printf("\n");
  }
  return 0;
}