/*
Half Pyramid-3.5(b): WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
        3	            1
                    0 0
                  1 1 1
  -------------------------------------
        4			        1
                    0 0
                  1 1 1
                0 0 0 0
*/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= n - row; col++)
    {
      printf(" ");
    }
    for (col = 1; col <= row; col++)
    {
      if (row % 2 != 0)
        printf("1");
      else
        printf("0");
    }
    printf("\n");
  }
  return 0;
}
