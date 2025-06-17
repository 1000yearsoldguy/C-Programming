#include <stdio.h>
int main()
{
  int i, n, num1 = 0, num2 = 1, temp;
  printf("Enter the number of terms: ");
  scanf(" %d", &n);
  printf("\nFirst %d terms of Fibonacci series are:\n", n);

  if (n >= 1)
    printf("\n0");
  if (n >= 2)
    printf(",1");
  for (i = 3; i <= n; i++)
  {
    temp = num1 + num2;
    printf(",%d", temp);
    num1 = num2;
    num2 = temp;
  }
  return 0;
}

/*Another solve for no.18:
------------------------

#include <stdio.h>
int main()
{
  int i, n, num1=0, num2=1, temp;
  printf("Enter the number of terms: ");
  scanf(" %d", &n);
  printf("\nFirst %d terms of Fibonacci series are:\n", n);
  for(i=1; i<=n; ++i)
  {
    printf("\n%d\n", num1);
    temp = num1+num2;
    num1=num2;
    num2=temp;
  }
  return 0;
}

*/