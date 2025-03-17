#include <stdio.h>
int main()
/**/{
  float a, r, Pi = 3.1415;
  printf("Input radius to calculate area of the circle:");
  scanf("%f", &r);
  a = 2 * Pi * r;
  printf("Area: %f", a);
  return 0;
}