/*
Half Pyramid-4.3(b): WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
       3			      C B A
                      B A
                        A
  -------------------------------------
       4			    D C B A
                    C B A
                      B A
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
    for (col = row; col >= 1; col--)
    {
      printf("%c", col + 64);
    }
    printf("\n");
  }
  return 0;
}
