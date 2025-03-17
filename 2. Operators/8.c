#include <stdio.h>
int main()
{
  int x, y, max;
  printf("Enter two integers:");
  scanf("%d%d", &x, &y);

  // Using conditional operator "?"
  max = (x > y) ? x : y;
  printf("Max: %d", max);
  return 0;
}