#include <stdio.h>
int main()
{
  int i, n;
  printf("Input N to print the series up to Nth term:");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    printf("%d,", 2 * i - 1);
  }
  return 0;
}