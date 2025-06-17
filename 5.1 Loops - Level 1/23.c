#include <stdio.h>
int main()
{
  int i, num1, num2, small, GCD;

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
  printf("\nGCD of two numbers is %d\n", GCD);
  return 0;
}
