#include <stdio.h>
int main()
{
  int x, y, add, sub, mult, quo, rem;
  printf("Enter the value of x & y:");
  scanf("%d %d", &x, &y);

  printf("Addition: %d\n", add = x + y);
  printf("Subtraction: %d\n", sub = x - y);
  printf("Multiplication: %d\n", mult = x * y);
  printf("Quotient: %d\n", quo = x / y);
  printf("Remainder: %d\n", rem = x % y);

  return 0;
}