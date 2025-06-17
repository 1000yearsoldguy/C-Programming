#include <stdio.h>
int main()
{
  int num, digit, sum;
  printf("Enter an integer: ");
  scanf("%d", &num);
  sum = num / 10;
  digit = sum % 10;
  if (digit % 3 == 0)
    printf("Yes");
  else
    printf("No");
  return 0;
}