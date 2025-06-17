#include <stdio.h>
struct length
{
  int m;
  float cm;
};
int main()
{
  struct length l;
  printf("Input length in Meter & Centimeter:");
  scanf("%d%f", &l.m, &l.cm);
  float meter = l.m + (l.cm / 100);
  float cm = (l.m * 100) + l.cm;

  printf("Length in meter: %.2f\nLength in centimeter: %.f", meter, cm);
  return 0;
}
