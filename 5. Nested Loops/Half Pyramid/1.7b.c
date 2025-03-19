/*
Half Pyramid-1.7(b): WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
       3			        A
                      B C
                      D E F
  -------------------------------------
       4			        A
                      B C
                      D E F
                      G H I J
*/

#include <stdio.h>
int main()
{
  int n, row, col, count = 0;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= row; col++)
    {
      printf("%c ", ++count + 64);
    }
    printf("\n");
  }
  return 0;
}