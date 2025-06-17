#include <stdio.h>
int main()
{
  int i, n, num1 = 0, num2 = 1, num3 = 2, temp;
  printf("Enter the number of terms: ");
  scanf(" %d", &n);
  printf("\nFirst %d terms of the series are:\n", n);

  if (n >= 1)
    printf("\n0");
  if (n >= 2)
    printf(",1");
  if (n >= 3)
    printf(",2");
  for (i = 4; i <= n; i++)
  {
    temp = num1 + num2 + num3;
    printf(",%d", temp);
    num1 = num2;
    num2 = num3;
    num3 = temp;
  }
  return 0;
}