#include <stdio.h>

int main()
{
  int i, n, num1 = 1, num2 = 2, sum = 0;

  printf("Enter the value of N to calculate the sum of the series: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    sum += (num1 * num1) * num2;
    num1++;
    num2++;
  }
  printf("\nResult = %d", sum);
  return 0;
}