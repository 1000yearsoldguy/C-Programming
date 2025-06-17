#include <stdio.h>
int main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);

  if (n % 3 == 0)
    printf("The number is -1");

  else if (n % 3 == 2)
    printf("The number is 1");

  else
    printf("The number is 0");

  return 0;
}