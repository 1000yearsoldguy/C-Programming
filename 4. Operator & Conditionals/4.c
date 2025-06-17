#include <stdio.h>
int main()
{
  float yard, feet, inch;
  printf("yard\nfeet\ninch\n");
  scanf("%f\%f\%f", &yard, &feet, &inch);
  feet = yard * 3 + feet + inch / 12;
  printf("%f", feet);
}