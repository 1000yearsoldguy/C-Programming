/*
Alphabet-2. WAP that will print a pattern based on the input integer n. Please see the sample input output.(Here underscore(_) indicates space.)

  Sample Input		Sample Output
  ------------		-------------
      5			          *___*
                      _*_*_
                      __*__
                      _*_*_
                      *___*
  -------------------------------------
      7			          *_____*
                      _*___*_
                      __*_*__
                      ___*___
                      __*_*__
                      _*___*_
                      *_____*

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
      if (row == col || row + col == n + 1)
        printf("*");
      else
        printf("_");
    }

    printf("\n");
  }
  return 0;
}
