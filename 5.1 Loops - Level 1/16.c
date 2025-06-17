#include <stdio.h>
int main()
{
  int num, digit1, digit2, rev = 0;

  printf("Enter a Number : ");
  scanf(" %d", &num);

  while (num != 0)
  {
    digit1 = num % 10;
    rev = rev * 10 + digit1;
    num = num / 10;
  }

  while (rev != 0)
  {
    digit2 = rev % 10;
    rev = rev / 10;
    printf(" %d ", digit2);
  }

  return 0;
}