/*
Half Pyramid-2.7(a): WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
       3			          1 2 3
                        4 5
                        6
  -------------------------------------
       4			          1 2 3 4
                        5 6 7
                        8 9
                        10
*/

#include <stdio.h>
int main()
{
  int n, row, col, count = 0;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = n; row >= 1; row--)
  {
    for (col = 1; col <= row; col++)
    {
      printf("%d ", ++count);
    }
    printf("\n");
  }
  return 0;
}
