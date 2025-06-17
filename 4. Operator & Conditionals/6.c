#include <stdio.h>
int main()
{
  int yard1, feet1, inch1, yard2, feet2, inch2, measure1, measure2;

  printf("Enter yard1: feet1: inch1: ");
  scanf("%d %d %d", &yard1, &feet1, &inch1);

  printf("Enter yard2: feet2: inch2: ");
  scanf("%d %d %d", &yard2, &feet2, &inch2);

  measure1 = yard1 * 36 + feet1 * 12 + inch1;
  measure2 = yard2 * 36 + feet2 * 12 + inch2;

  if (measure1 > measure2)
    printf("measure1(%d) is greater than measure2(%d)", measure1, measure2);
  else
    printf("measure2(%d) is greater than measure1(%d)", measure2, measure1);
  return 0;
}