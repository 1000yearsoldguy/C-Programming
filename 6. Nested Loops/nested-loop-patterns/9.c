/*
WAP that will print a pattern based on the input integer n. Please see the sample input output.

    Sample Input        Sample Output
    ------------        -------------
          3             1 2 3
                        2 3 4
                        3 4 5
    -------------------------------------
          4             1 2 3 4
                        2 3 4 5
                        3 4 5 6
                        4 5 6 7
*/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = row; col < n + row; col++)
    {
      printf("%d ", col);
    }
    printf("\n");
  }
  return 0;
}