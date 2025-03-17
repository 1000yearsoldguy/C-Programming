#include <stdio.h>
int main()
{
  float X;
  printf("Input a floating point number:");
  scanf("%f", &X);
  int A = X + 0.5;
  int B = X - 0.5;
  if (X < 0)
    X = -1 * X;
  printf("\nA = %d, B = %d, C = %.1f", A, B, X);
  return 0;
}