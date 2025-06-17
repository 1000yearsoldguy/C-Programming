#include <stdio.h>
float equ(float x)
{
  return (1 / (x * x));
}

int main()
{
  float x;
  printf("Enter the value of x to calculate 1/(x^2):");
  scanf("%f", &x);

  printf("\nCalculated value of 1/(%f^2) is: %f", x, equ(x));
  return 0;
}