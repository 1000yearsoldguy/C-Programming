/*
Half Pyramid-1.4(b): WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
        3			        A
                      B B
                      C C C
  -------------------------------------
        4			        A
                      B B
                      C C C
                      D D D D
*/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= row; col++)
    {
      printf("%c ", row + 64);
    }
    printf("\n");
  }
  return 0;
}
