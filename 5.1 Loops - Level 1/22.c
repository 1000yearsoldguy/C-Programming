#include <stdio.h>
int main()
{
  int binary = 0, decimal, mult = 1, digit;

  printf("Enter a decimal number: ");
  scanf("%d", &decimal);

  while (decimal != 0)
  {
    digit = decimal % 2;
    binary = binary + digit * mult;
    decimal = decimal / 2;
    mult = mult * 10;
  }
  printf("\nBinary of entered Decimal number is %d\n", binary);

  return 0;
}