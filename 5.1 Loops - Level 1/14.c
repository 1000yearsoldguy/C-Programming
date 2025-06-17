#include <stdio.h>
int main()
{
  int n, num, digit, rev = 0, mult;
  printf("Enter a Number : ");
  scanf(" %d", &n);

  num = n;

  while (n != 0)
  {
    digit = n % 10;
    rev = rev * 10 + digit;
    n = n / 10;
  }

  if (rev == num)
    printf("\n%d is a palindrome number\n", num);
  else
    printf("\n%d is not a palindrome number\n", num);
  return 0;
}
