#include <stdio.h>
int main()
{
  int i, n, flag = 1;

  printf("Enter Any positive Number : ");
  scanf(" %d", &n);

  for (i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      flag = 0;
      break;
    }
  }

  if (n == 1)
  {
    printf("\n%d is neither Prime nor Composite.\n", n);
  }
  else if (flag == 1)
  {
    printf("\n%d is a Prime Number.\n", n);
  }
  else
  {
    printf("\n%d is a Composite Number.\n", n);
  }

  return 0;
}