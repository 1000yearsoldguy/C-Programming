#include <stdio.h>
int main()
{
  int n;
  printf("How many times you want to print 'Hello World'?: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    printf("Hello World \n");
  }
  return 0;
}
