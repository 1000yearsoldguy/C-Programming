#include <stdio.h>
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("\nValue in func: %d %d\n", *a, *b);
}

int main()
{
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);
  swap(&a, &b);
  printf("Value in main: %d %d\n", a, b);
  return 0;
}