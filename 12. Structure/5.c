#include <stdio.h>
struct point
{
  int x, y;
};

int main()
{
  struct point a, b, c;
  printf("Input coordinates(x,y) for point A:");
  scanf("%d%d", &a.x, &a.y);
  printf("Input coordinates(x,y) for point B:");
  scanf("%d%d", &b.x, &b.y);
  printf("Input coordinates(x,y) for point C:");
  scanf("%d%d", &c.x, &c.y);

  float area = 0.5 * (a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y));

  if (area < 0)
    area = (-1 * area);

  if (area == 0)
    printf("\nThey are in the same line.");
  else
    printf("\nThe distance is %.2f unit.", area);

  return 0;
}
