#include <stdio.h>
int main()
{
  int a, b, c, x, y, z;
  printf("Enter value of a,b,c:");
  scanf("%d %d %d", &a, &b, &c);

  x = a - b / 3 + (c * 2) - 1;
  y = a - (b / (3 + c) * 2) - 1;
  z = a - ((b / 3) + c * 2) - 1;

  printf("X = %d\n", x);
  printf("Y = %d\n", y);
  printf("Z = %d\n", z);

  return 0;
}