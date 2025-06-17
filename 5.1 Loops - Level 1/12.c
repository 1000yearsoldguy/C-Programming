#include <stdio.h>
int main()
{
  int num, digit, count = 0, sum = 0;

  printf("Enter a Number : ");
  scanf(" %d", &num);

  while (num != 0)
  {
    digit = num % 10;
    sum = sum + digit;
    num = num / 10;
    count++;
  }
  printf("\nTotal digits in the number = %d", count);
  printf("\nSum of the digits = %d\n", sum);
  return 0;
}