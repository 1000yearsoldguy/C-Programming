#include <stdio.h>
int main()
{
  int i, num1, num2, large, LCM;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

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
  printf("\nLCM of two numbers is %d\n", LCM);
  return 0;
}