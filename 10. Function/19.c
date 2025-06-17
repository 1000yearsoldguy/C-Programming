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

void GenNthPrime(int range)
{
  int c = 0, i, n = 2, temp = 0;

  while (c != range)
  {
    int count = 0;
    if (IsPrime(n) == 0)
    {
      count++;
    }
    if (count == 0)
    {
      c++;
      temp = n;
    }
    n++;
  }
  printf("\n%dth prime number: %d\n", range, temp);
}

int main()
{
  int range;
  printf("Enter a value for N to find Nth prime number:");
  scanf("%d", &range);
  GenNthPrime(range);
  return 0;
}
