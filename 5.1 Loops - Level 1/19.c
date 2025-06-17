#include <stdio.h>
int main()
{
  int i, n, num1 = 0, num2 = 1, temp;
  printf("Enter a Number: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    if (i <= 1)
      temp = i;
    else
    {
      temp = num1 + num2;
      num1 = num2;
      num2 = temp;
    }
  }
  printf("\n%dth term of the Fibonacci series is:%d\n", n, temp);
  return 0;
}