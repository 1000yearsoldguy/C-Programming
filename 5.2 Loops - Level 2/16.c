#include <stdio.h>

int main()
{
  int i, num1, num2, small, large, GCD, LCM;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  if (num1 < num2)
    small = num1;
  else
    small = num2;

  for (i = small; i >= 1; i--)
  {
    if (num1 % i == 0 && num2 % i == 0)
    {
      GCD = i;
      break;
    }
  }

  if (num1 > num2)
    large = num1;
  else
    large = num2;

  for (i = large; i <= num1 * num2; i++)
  {
    if (i % num1 == 0 && i % num2 == 0)
    {
      LCM = i;
      break;
    }
  }

  printf("\nGCD of two numbers is %d\n", GCD);
  printf("\nLCM of two numbers is %d\n", LCM);
  return 0;
}