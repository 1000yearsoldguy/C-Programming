#include <stdio.h>
int main()
{
  int num1, num2, num3;

  printf("Enter num1: num2: num3: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if ((num1 > num2) && (num1 > num3))
  {
    printf("%d:num1 is the maximum among all three numbers", num1);
  }
  else if ((num2 > num1) && (num2 > num3))
  {
    printf("%d:num2 is the maximum among all three numbers", num2);
  }
  else
  {
    printf("%d:num3 is the maximum among all three numbers", num3);
  }

  return 0;
}
