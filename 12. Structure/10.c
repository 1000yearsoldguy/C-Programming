#include <stdio.h>
#include <math.h>
struct point
{
  int x, y;
};
int main()
{
  struct point a;
  printf("Input real & imaginary part of a complex number:");
  scanf("%d%d", &a.x, &a.y);

  float mod = sqrt((a.x * a.x) + (a.y * a.y));
  float arg = atan2(a.y, a.x);
  /* atan2() function compute the principal value
  of the arc tangent of y/x, using the signs
  of both arguments to determine the quadrant
  of the return value. */
  printf("Mod = %f\nArgument = %f\n", mod, arg);
  return 0;
}