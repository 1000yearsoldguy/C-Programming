#include <stdio.h>
int main()
{
  int yard1, feet1, inch1, yard2, feet2, inch2, yard, feet, inch;

  printf("Enter yard1: feet1: inch1: ");
  scanf("%d %d %d", &yard1, &feet1, &inch1);

  printf("Enter yard2: feet2: inch2: ");
  scanf("%d %d %d", &yard2, &feet2, &inch2);

  yard = yard1 - yard2;
  feet = feet1 - feet2;
  inch = inch1 - inch2;

  printf("yard:%d,feet:%d,inch:%d", yard, feet, inch);

  return 0;
}