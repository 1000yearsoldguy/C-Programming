/*
Mix-3. WAP that will print a pattern based on the input integer n. Please see the sample input output.(Here underscore(_) indicates space.)

  Sample Input		Sample Output
  ------------		-------------
       9			      ____$____
                    ___$$$___
                    __$_$_$__
                    _$__$__$_
                    $$$$$$$$$
                    _$__$__$_
                    __$_$_$__
                    ___$$$___
                    ____$____
  -------------------------------------
      13			    ______$______
                  _____$$$_____
                  ____$_$_$____
                  ___$__$__$___
                  __$___$___$__
                  _$____$____$_
                  $$$$$$$$$$$$$
                  _$____$____$_
                  __$___$___$__
                  ___$__$__$___
                  ____$_$_$____
                  _____$$$_____
                  ______$______
*/

#include <stdio.h>
int main()
{
  int row, col, n;
  scanf("%d", &n); // ‘n’ must be odd
  int num1 = n / 2 * 3;
  for (row = 0; row < n; row++)
  {
    for (col = 0; col < n; col++)
    {
      // center horizontal, center vertical, upper left diagonal, bottom left diagonal, upper right diagonal, bottom right diagonal
      if (row == n / 2 || col == n / 2 || row + col == n / 2 || row - col == n / 2 || col - row == n / 2 || row + col == num1)
        printf("$");
      else
        printf("_");
    }
    printf("\n");
  }
  return 0;
}