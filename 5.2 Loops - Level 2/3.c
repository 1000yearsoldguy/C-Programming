#include <stdio.h>
int main(void)
{
  int n, i;
  printf("Input N to print the series up to Nth term: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
      printf("1,");
    else
      printf("0,");
  }
  return 0;
}