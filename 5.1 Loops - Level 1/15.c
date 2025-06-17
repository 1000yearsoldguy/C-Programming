#include <stdio.h>
int main()
{
  int num, digit, n;
  printf("Enter a Number : ");
  scanf(" %d", &num);

  while (num != 0)
  {
    digit = num % 10;
    num = num / 10;
  }
  printf("\nMost significant digit of the integer is %d\n", digit);
  return 0;
}