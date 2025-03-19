/*
Half Pyramid-3.2(b): WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
        3	              A
                      A B
                    A B C
  -------------------------------------
        4			          A
                      A B
                    A B C
                  A B C D
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
      printf("%d ", row);
    }
    printf("\n");
  }
  return 0;
}