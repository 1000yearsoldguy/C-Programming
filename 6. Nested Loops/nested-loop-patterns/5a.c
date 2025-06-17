/*
WAP that will print a pattern based on the input integer n. Please see the sample input output.
// Printing numbers in descending order.

    Sample Input        Sample Output
    ------------        -------------
          3             1 2 3
                        1 2 3
                        1 2 3
    -------------------------------------
          5             1 2 3 4 5
                        1 2 3 4 5
                        1 2 3 4 5
                        1 2 3 4 5
                        1 2 3 4 5
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
      printf("%d ", col);
    }
    printf("\n");
  }
  return 0;
}