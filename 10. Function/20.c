#include <stdio.h>
int GCD(int a, int b)
{
  int i, small, GCD;

  if (a < b)
    small = a;
  else
    small = b;

  for (i = small; i >= 1; i--)
  {
    if (a % i == 0 && b % i == 0)
    {
      GCD = i;
      break;
    }
  }
  return GCD;
}

int LCM(int a, int b)
{
  int i, large, LCM;

  if (a > b)
    large = a;
  else
    large = b;

  for (i = large; i <= a * b; i++)
  {
    if (i % a == 0 && i % b == 0)
    {
      LCM = i;
      break;
    }
  }
  return LCM;
}

int main()
{
  int num1, num2;
  while (1)
  {
    printf("\nEnter 2 numbers:");
    scanf("%d %d", &num1, &num2);

    printf("GCD: %d", GCD(num1, num2));
    printf("\nLCM: %d", LCM(num1, num2));
  }
  return 0;
}
