#include <stdio.h>
int main()
{
  int num, digit, rev = 0, mult;

  printf("Enter a Number : ");
  scanf(" %d", &num);

  while (num != 0)
  {
    digit = num % 10;
    rev = rev * 10 + digit;
    num = num / 10;
  }
  printf("\nReverse number of the entered number = %d\n", rev);
  return 0;
}