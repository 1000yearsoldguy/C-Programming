/*
Half Pyramid-1.3(b): WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
      3			          A
                      B A
                      C B A
  -------------------------------------
      4			          A
                      B A
                      C B A
                      D C B A
*/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = row; col >= 1; col--)
    {
      printf("%c ", col + 64);
    }
    printf("\n");
  }
  return 0;
}