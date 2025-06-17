#include <stdio.h>
int main()
{
  int i, n, num1 = 1, num2 = 3, sum = 0;

  printf("Enter a value for N : ");
  scanf(" %d", &n);

  for (i = 1; i <= n; i++)
  {
    sum = sum + num1 * num2;
    num1 = num1 + 2;
    num2 = num2 + 3;
  }
  printf("\nThe sum of the first %d terms of the following series = %d", n, sum);
  return 0;
}
