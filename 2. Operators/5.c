#include <stdio.h>
int main()
{
  int x, y;
  printf("Enter the value of x & y:");
  scanf("%d %d", &x, &y);

  printf("Incremented Value: %d\n", x += y);
  printf("Decremented Value: %d\n", x -= y);

  return 0;
}