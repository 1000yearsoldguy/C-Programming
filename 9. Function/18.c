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

void GeneratePrime(int range)
{
  int n;
  printf("Prime numbers less than %d: ", range);
  for (n = 0; n < range; n++)
  {
    // Print if current number is prime.
    if (IsPrime(n) == 1)
      printf("%d, ", n);
  }
}

int main()
{
  int range;
  printf("Enter a range:");
  scanf("%d", &range);
  GeneratePrime(range);
  return 0;
}