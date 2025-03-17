/*
Alphabet-3. WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
       5			       ZZZZZ
                        Z
                       Z
                      Z
                     ZZZZZ
  -------------------------------------
       7			    ZZZZZZZ
                       Z
                      Z
                     Z
                    Z
                   Z
                  ZZZZZZZ
*/
#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = n; col >= 1; col--)
    {
      if (row == 1 || row == n || row == col)
        printf("Z");
      else
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}
