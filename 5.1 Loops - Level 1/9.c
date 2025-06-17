#include <stdio.h>
int main()
{
  int i, n, result = 1;

  printf("Enter a positive Number : ");
  scanf(" %d", &n);

  for (i = n; i >= 1; i--)
  {
    result = result * i;
  }
  printf("\nThe result of %d! = %d", n, result);
  return 0;
}