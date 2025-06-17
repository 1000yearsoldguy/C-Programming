#include <stdio.h>
struct point
{
  int real, img;
};
int main()
{
  struct point a, b;
  printf("Input coordinates for a:");
  scanf("%d%d", &a.real, &a.img);
  printf("Input coordinates for b:");
  scanf("%d%d", &b.real, &b.img);

  float x = a.real * b.real + a.img * b.img;
  float y = a.img * b.real - a.real * b.img;
  float z = b.real * b.real + b.img * b.img;

  printf("Addition: (%d%+di)/(%d%+di) = %.2f%+.2fi", a.real, a.img, b.real, b.img, x / z, y / z);
  return 0;
}