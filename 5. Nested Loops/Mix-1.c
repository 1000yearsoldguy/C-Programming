/*
Mix-1. WAP that will print a pattern based on the input integer n. Please see the sample input output.(Here underscore(_) indicates space.)

  Sample Input		Sample Output
  ------------		-------------
       4			        1_____1
                      12___21
                      123_321
                      1234321
  -------------------------------------
       3			          1___1
                        12_21
                        12321
*/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    // Prints first part of pattern
    for (col = 1; col <= row && col < n; col++)
    {
      printf("%d", col);
    }
    // Prints spaces between two parts
    for (col = row * 2; col < n * 2 - 1; col++)
    {
      printf(" ");
    }
    // Prints second part of the pattern
    for (col = row; col >= 1; col--)
    {
      printf("%d", col);
    }

    printf("\n");
  }
  return 0;
}