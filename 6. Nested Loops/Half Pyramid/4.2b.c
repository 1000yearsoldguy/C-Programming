/*
Half Pyramid-4.2(b): WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
       3			      A B C
                      A B
                        A
  -------------------------------------
       4			    A B C D
                    A B C
                      A B
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
      printf("%c", col + 64);
    }
    printf("\n");
  }
  return 0;
}
