/*
Half Pyramid-4.6: WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
       3		        3 6 9
                      2 4
                        1
  -------------------------------------
       4	       4 8 12 16
                    3 6 9
                      2 4
                        1
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
      printf("%d", row * col);
    }
    printf("\n");
  }
  return 0;
}
