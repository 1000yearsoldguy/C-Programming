#include <stdio.h>
int main()
{
  int x, mult = 1;
  printf("\nEnter a value to determine if it is a power of 2: ");
  scanf("%d", &x);

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
  return 0;
}