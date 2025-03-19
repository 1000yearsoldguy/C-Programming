/*
Half Pyramid-2.8: WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
        3			      3 4 5
                    2 3
                    1
  -------------------------------------
        4			      4 5 6 7
                    3 4 5
                    2 3
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
    for (col = row; col <= row + row - 1; col++)
    {
      printf("%d ", col);
    }
    printf("\n");
  }
  return 0;
}
