#include <stdio.h>
int main()
{
  int h1, m1, s1, h2, m2, s2, time1, time2, time, hour, minutes, second;
  printf("enter h1: m1: s1: ");
  scanf("%d %d %d", &h1, &m1, &s1);

  printf("enter h2: m2: s2: ");
  scanf("%d %d %d", &h2, &m2, &s2);

  time1 = h1 * 3600 + m1 * 60 + s1;
  time2 = h2 * 3600 + m2 * 60 + s2;
  time = time1 + time2;

  hour = time / 3600;
  time = time % 3600;
  minutes = time / 60;
  time = time % 60;
  second = time;

  printf("%d-hour %d-minutes %d-second", hour, minutes, second);
  return 0;
}
