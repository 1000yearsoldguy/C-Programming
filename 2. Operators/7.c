#include <stdio.h>
int main()
{
  int a;
  float b;
  printf("input an integer and a floating point number: ");
  scanf("%d%f", &a, &b);

  // Assignment operation
  int b2 = b;
  float a2 = a;
  printf("Assignment: %f assigned to an int produces %d", b, b2);
  printf("\nAssignment: %d assigned to an float produces %f", a, a2);

  // Type Casting
  printf("\nType Casting: (float) %d produces %f", a, (float)a);
  printf("\nType Casting: (int) %f produces %d", b, (int)b);

  return 0;
}