#include <stdio.h>
struct components
{
  int m, cm;
};
int main()
{
  struct components value1, value2, ans;
  printf("Input meter and centimeter components for Value-1: ");
  scanf("%d%d", &value1.m, &value1.cm);
  printf("Input meter and centimeter components for Value-2: ");
  scanf("%d%d", &value2.m, &value2.cm);

  ans.m = (value1.m + value2.m + ((value2.cm + value2.cm) / 100));
  ans.cm = ((value2.cm + value2.cm) % 100);

  printf("The sum is %d meter %d centimeter.", ans.m, ans.cm);
  return 0;
}