#include <stdio.h>
int IsPrime(int n)
{
  int i;
  if (n == 0 || n == 1)
    return 0;
  for (i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d", &n);
  if (IsPrime(n))
    printf("Prime.");
  else
    printf("Not Prime.");

  return 0;
}