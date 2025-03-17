#include <stdio.h>
int main()
{
  int intType;
  float floatType;
  double doubleType;
  char charType;
  printf("Size of int in byte(s) = %ld\n", sizeof(intType));
  printf("Size of float in byte(s) = %ld\n", sizeof(floatType));
  printf("Size of double in byte(s) = %ld\n", sizeof(doubleType));
  printf("Size of char in byte(s) = %ld\n", sizeof(charType));
  return 0;
}