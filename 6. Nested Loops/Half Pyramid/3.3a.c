/*
Half Pyramid-3.3(a): WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
        3		            1
                      2 1
                    3 2 1
  -------------------------------------
          4			        1
                      2 1
                    3 2 1
                  4 3 2 1
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
    for (col = row; col >= 1; col--)
    {
      printf("%d", col);
    }
    printf("\n");
  }
  return 0;
}
