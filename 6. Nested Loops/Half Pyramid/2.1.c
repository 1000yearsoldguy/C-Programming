/*
Half Pyramid-2.1: WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
      5			          * * * * *
                      * * * *
                      * * *
                      * *
                      *
  -------------------------------------
      2			          * *
                      *
*/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = n; row >= 1; row--)
  {
    for (col = 1; col <= row; col++)
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}