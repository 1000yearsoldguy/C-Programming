/*
Half Pyramid-4.4(b): WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
       3			      C C C
                      B B
                        A
  -------------------------------------
       4			    D D D D
                    C C C
                      B B
                        A
*/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = n; row >= 1; row--)
  {
    for (col = 1; col <= n - row; col++)
    {
      printf(" ");
    }
    for (col = 1; col <= row; col++)
    {
      printf("%c", row + 64);
    }
    printf("\n");
  }
  return 0;
}
