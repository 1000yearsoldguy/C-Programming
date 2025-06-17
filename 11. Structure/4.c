#include <stdio.h>
#include <math.h>
struct point
{
  int x, y;
};

int main()
{
  struct point a, b;
  float d;
  printf("Enter coordinates for the 1st point:");
  scanf("%d%d", &a.x, &a.y);

  printf("Enter coordinates for the 2nd point:");
  scanf("%d%d", &b.x, &b.y);

  d = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));

  printf("The distance is %.2f unit", d);
  return 0;
}
