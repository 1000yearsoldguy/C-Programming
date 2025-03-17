/*
WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
          5			  A A A A A
                  B B B B B
                  C C C C C
                  D D D D D
                  E E E E E
  -------------------------------------
          2			  A A
                  B B
*/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= n; col++)
    {
      printf("%c ", row + 64);
    }
    printf("\n");
  }
  return 0;
}