#include <stdio.h>
int main()
{
  float num1, num2, num3, num4;

  printf("Enter num1: num2: num3: num4 ");
  scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

  if ((num1 < num2) && (num1 < num3) && (num1 < num4))
    printf("%f:num1 is the minimum among all four numbers", num1);

  else if ((num2 < num1) && (num2 < num3) && (num2 < num4))
    printf("%f:num2 is the minimum among all four numbers", num2);

  else if ((num3 < num1) && (num3 < num2) && (num2 < num4))
    printf("%f:num3 is the minimum among all four numbers", num3);

  else
    printf("%f:num4 is the minimum among all four numbers", num4);

  return 0;
}