#include <stdio.h>
int main()
{
  int x;
  printf("Enter value of x++:");
  scanf("%d", &x);
  printf("The value of equation is X = %d\n", x++);

  printf("\nEnter value of ++x:");
  scanf("%d", &x);
  printf("The value of equation is X = %d\n", ++x);

  printf("\nEnter value of x--:");
  scanf("%d", &x);
  printf("The value of equation is X = %d\n", x--);

  printf("\nEnter value of --x:");
  scanf("%d", &x);
  printf("The value of equation is X = %d\n", --x);

  return 0;
}