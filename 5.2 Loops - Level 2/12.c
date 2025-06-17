#include <stdio.h>

int main()
{
  int i, n, num1 = 1, num2 = 1, temp;
  printf("Enter the number of terms: ");
  scanf(" %d", &n);
  printf("\nFirst %d terms of Fibonacci series are:\n", n);
  for (i = 1; i <= n; ++i)
  {
    printf("%d,", num1);
    temp = num1 + num2;
    num1 = num2;
    num2 = temp;
  }
  return 0;
}