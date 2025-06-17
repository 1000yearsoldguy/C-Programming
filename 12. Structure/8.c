#include <stdio.h>
struct point
{
  int real, img;
};
int main()
{
  struct point a, b, c;
  printf("Input coordinates for a:");
  scanf("%d%d", &a.real, &a.img);
  printf("Input coordinates for b:");
  scanf("%d%d", &b.real, &b.img);

  c.real = a.real * b.real - a.img * b.img;
  c.img = a.img * b.real + a.real * b.img;

  printf("Addition: (%d%+di)*(%d%+di) = %d%+di", a.real, a.img, b.real, b.img, c.real, c.img);
  return 0;
}