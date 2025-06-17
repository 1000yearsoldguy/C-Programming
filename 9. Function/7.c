#include <stdio.h>
float Area(float base, float height)
{
  return (0.5 * base * height);
}

int main()
{
  float base, height;
  printf("Enter Base & Height of the triangle to calculate the area:");
  scanf("%f%f", &base, &height);

  printf("\nArea of the triangle: %f", Area(base, height));
  return 0;
}