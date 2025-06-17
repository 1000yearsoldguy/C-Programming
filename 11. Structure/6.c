#include <stdio.h>
#include <math.h>
struct point
{
  float x, y;
};

int main()
{
  struct point a;
  printf("Input  the real and imaginary parts of a complex number:");
  scanf("%f%f", &a.x, &a.y);

  printf("%.2f %+.2fi", a.x, a.y);

  return 0;
}