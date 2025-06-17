/*
Mix-2. WAP that will print a pattern based on the input integer n. Please see the sample input output.(Here underscore(_) indicates space.)

  Sample Input		Sample Output
  ------------		-------------
        5			        *****
                      *___*
                      *****
                      *___*
                      *****
  -------------------------------------
        3			        ***
                      *_*
                      ***
*/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);

  for (row = 1; row <= n; row++)
  {
    printf("*");
  }
  printf("\n");

  for (row = 1; row <= n / 2; row++)
  {
    printf("*");

    for (col = 2; col < n; col++)
    {
      printf(" ");
    }
    printf("*\n");

    for (col = 1; col <= n; col++)
    {
      printf("*");
    }

    printf("\n");
  }
  return 0;
}
