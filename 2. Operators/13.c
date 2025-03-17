#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  float x, solve, degree, radian;
  printf("Enter the value of x:");
  scanf("%f", &degree);

  radian = degree * (M_PI / 180.0);
  x = radian;

  solve = 2 * (pow(cos(x), 2)) - (sqrt(3))*sin(x / 2);

  printf("%f\n", solve);

  return 0;
}