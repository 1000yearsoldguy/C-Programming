#include <stdio.h>
int main()
{
  int i, x, y, result = 1;

  printf("Enter Base Value \"X\": ");
  scanf(" %d", &x);
  printf("\nEnter the Exponent Value \"Y\": ");
  scanf(" %d", &y);

  for (i = 1; i <= y; i++)
  {
    result = result * x;
  }
  printf("\n The Final result of %d^%d = %d", x, y, result);
  return 0;
}