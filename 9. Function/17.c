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
int nextPrime(int range)
{
  int n;
  printf("Prime numbers less than %d: ", range);
  for (n = range + 1;; n++)
  {
    // Print if current number is prime.
    if (IsPrime(n) == 1)
      return n;
  }
}
int main()
{
  int range;
  printf("Enter a range:");
  scanf("%d", &range);
  printf("\n%d", nextPrime(range));
  return 0;
}