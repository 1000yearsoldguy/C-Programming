/*
Half Pyramid-3.4(a): WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
        3	            1
                    2 2
                  3 3 3
  -------------------------------------
        4			1
                    2 2
                  3 3 3
                4 4 4 4
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
      printf("%d", row);
    }
    printf("\n");
  }
  return 0;
}
