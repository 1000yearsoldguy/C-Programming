/*
WAP that will print a pattern based on the input integer n. Please see the sample input output.

    Sample Input        Sample Output
    ------------        -------------
          5             A B C D E
                        A B C D E
                        A B C D E
                        A B C D E
                        A B C D E
    -------------------------------------
          2             A B
                        A B
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
      printf("%c ", col + 64);
    }
    printf("\n");
  }
  return 0;
}