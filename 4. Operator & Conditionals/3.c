#include <stdio.h>
int main()
{
  int num, y, m, d, nd;
  printf("Enter a number: ");
  scanf("%d", &num);
  y = num / 365;
  d = num % 365;
  m = d / 30;
  nd = d % 30;
  printf("year:%d\n", y);
  printf("month:%d\n", m);
  printf("day:%d\n", nd);
  return 0;
}