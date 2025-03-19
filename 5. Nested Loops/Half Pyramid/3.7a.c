/*
Half Pyramid-3.7(a): WAP that will print a pattern based on the input integer n. Please see the sample input output.
      // Floyd's Triangle.

  Sample Input		Sample Output
  ------------		-------------
        3		          1
                    2 3
                  4 5 6
  -------------------------------------
        4			        1
                    2 3
                  4 5 6
                7 8 9 10
*/

#include <stdio.h>
int main()
{
  int n, row, col, count = 0;
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
      printf("%d", ++count);
    }
    printf("\n");
  }
  return 0;
}
