/*
Alphabet-1. WAP that will print a pattern based on the input integer n. Please see the sample input output.

  Sample Input		Sample Output
  ------------		-------------
       5			      H	      H
                    H 	    H
                    H H H H H
                    H       H
                    H	      H
  -------------------------------------
       7			      H 	        H
                    H 	        H
                    H           H
                    H H H H H H H
                    H           H
                    H           H
                    H 	        H
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
      if (col == 1 || col == n || row == n / 2 + 1)
        printf("H");
      else
        printf(" ");
    }

    printf("\n");
  }
  return 0;
}
