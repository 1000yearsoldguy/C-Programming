/***********************************************
 * Question: Reverse Pyramid-2(a). WAP that will print a pattern based on the input integer n.
 * Please see the sample input output.

Sample Input: 5
Sample Output:
123456789
 1234567
  12345
   123
    1
-------------------------------------
Sample Input: 3
Sample Output:
12345
 123
  1
***********************************************/

#include <stdio.h>
int main()
{
  int n, row, col;
  printf("Enter a value for N:");
  scanf("%d", &n);
  for (row = n; row >= 1; row--)
  {
    for (col = 1; col <= 2 * row - 1; col++)
    {
      if (col <= row)
        printf("%d", col);
      else
        printf("%d", 2 * row - col);
    }
    printf("\n");
  }
  return 0;
}