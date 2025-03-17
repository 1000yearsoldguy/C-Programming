#include <stdio.h>
int main()
{
  int x, mult = 1;
  printf("Enter a value to determine if it is a power of 2: ");
  scanf("%d", &x);
  if (!(x <= 0))
  {
    for (int i = 1;; i++)
    {
      mult = mult * 2;
      if (mult == x)
      {
        printf("\nYes.");
        break;
      }
      if (mult > x)
      {
        printf("\nNo.");
        break;
      }
    }
  }
  else
  {
    if (x == 0)
      printf("\nZero is not a valid input.");
    else
      printf("\nNegative input is not valid.");
  }
  return 0;
}