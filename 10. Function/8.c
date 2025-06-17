#include <stdio.h>
int sum(int n)
{
  int i, val, sum = 0;

  for (i = 1; i <= n; i++)
  {
    scanf("%d", &val);
    sum = sum + val;
  }
  printf("\nSum In Function=%d", sum);
  return sum;
}
int main()
{
  int x, res;

  printf("How many numbers you want to add? :");
  scanf("%d", &x);
  printf("Enter %d integers:\n", x);

  res = sum(x);
  printf("\nSum In Main=%d\n", res);

  return 0;
}