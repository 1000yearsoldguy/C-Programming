#include <stdio.h>
#include <stdlib.h>
struct time
{
  int hour;
  int min;
  int sec;
};

int main()
{
  struct time intrv, intrv2, diff;
  int sec1, sec2, sec3;
  printf("Enter the hour, minute & second---1:");
  scanf("%d%d%d", &intrv.hour, &intrv.min, &intrv.sec);
  printf("Enter the hour, minute & second---2:");
  scanf("%d%d%d", &intrv2.hour, &intrv2.min, &intrv2.sec);

  sec1 = (((intrv.hour * 60) * 60) + (intrv.min * 60) + intrv.sec);
  sec2 = (((intrv2.hour * 60) * 60) + (intrv2.min * 60) + intrv2.sec);
  sec3 = abs(sec1 - sec2);

  diff.hour = (sec3 / 3600);
  diff.min = ((sec3 % 3600) / 60);
  diff.sec = (sec3 % 60);
  printf("%d %d %d", diff.hour, diff.min, diff.sec);
  return 0;
}