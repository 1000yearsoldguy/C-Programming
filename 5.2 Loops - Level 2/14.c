#include <stdio.h>

int main()
{
  int i, n, r, n_r, factN = 1, factR = 1, factn_r = 1, sum;

  printf("Enter value of n & r to calculate nCr: ");
  scanf("%d%d", &n, &r);
  n_r = n - r;

  // Calculates n!
  for (i = n; i >= 1; i--)
  {
    factN = factN * i;
  }
  // Calculates r!
  for (i = r; i >= 1; i--)
  {
    factR = factR * i;
  }
  // Calculates (n-r)!
  for (i = n_r; i >= 1; i--)
  {
    factn_r = factn_r * i;
  }

  sum = (factN / (factR * factn_r));
  printf("\n%dC%d = %d", n, r, sum);
  return 0;
}