#include <stdio.h>
int main()
{
  double num;
  printf("Enter a number: ");
  scanf("%lf", &num);

  if (num < 0.0)
    printf("Negative\n");
  else if (num > 0.0)
    printf("Positive\n");
  else
    printf("You entered 0\n");

  return 0;
}