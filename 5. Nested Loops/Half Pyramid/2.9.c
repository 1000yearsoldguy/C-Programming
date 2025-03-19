/*
Half Pyramid-2.9: WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
        3			        3 2 1
                      3 2
                      3
  -------------------------------------
        4			        4 3 2 1
                      4 3 2
                      4 3
                      4
*/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = n; row >= 1; row--)
  {
    for (col = n; col >= n - row + 1; col--)
    {
      printf("%d ", col);
    }
    printf("\n");
  }
  return 0;
}
