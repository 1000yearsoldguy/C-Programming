#include <stdio.h>
int main(void)
{
  int n, i;
  printf("Enter term: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
      printf("1 ");

    if (i % 2 == 0)
      printf("0 ");
  }
  return 0;
}