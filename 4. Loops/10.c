#include <stdio.h>
int main()
{
  int i, n, sum = 0;
  printf("Enter the value of N to calculate the sum of first Nth terms:");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    if (i % 2)
      sum = sum + i;
    else
      sum = sum - i;
  }
  printf("\nResult = %d", sum);
  return 0;
}