#include <stdio.h>
float dfrnc(float x, float y)
{
  if (x > y)
    return x - y;
  if (y > x)
    return y - x;
}

int main()
{
  float x, y;
  printf("Enter the value of x & y:");
  scanf("%f%f", &x, &y);

  printf("\nAbsolute value of their difference: %f", dfrnc(x, y));
  return 0;
}