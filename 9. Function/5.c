#include <stdio.h>
int greet(int n)
{
  if (n == 0)
    return 0;
  printf("Hello\n");
  greet(n - 1);
}
int main()
{
  int n;
  printf("How many time you want to print Hello? :");
  scanf("%d", &n);
  greet(n);
  return 0;
}