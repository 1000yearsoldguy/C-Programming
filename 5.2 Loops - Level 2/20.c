#include <stdio.h>
int main()
{
  int i, n, num = 0, sum = 0;

  printf("Enter a value for N: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    num = num * 10 + i;
    sum = sum + num;
  }
  printf("\nThe sum of the series up to %d terms = %d", n, sum);
  return 0;
}