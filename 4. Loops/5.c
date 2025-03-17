#include <stdio.h>

int main()
{
  int x, y;
  printf("Enter values for X & Y: ");
  scanf("%d %d", &x, &y);
  printf("\n");

  while (x != y)
  {
    printf("%d,", x * x);
    if (x < y)
      x++;
    else
      x--;
  }
  printf("Reached!\n");
  return 0;
}