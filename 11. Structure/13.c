#include <stdio.h>
struct time
{
  float hour;
  float min;
  int sec;
};

int main()
{
  struct time intrv, out_intrv;
  printf("Enter hour, minute & second to calculate the interval:");
  scanf("%f%f%d", &intrv.hour, &intrv.min, &intrv.sec);

  out_intrv.hour = (intrv.hour + (intrv.min / 60) + ((intrv.sec / 60) / 60));
  out_intrv.min = ((intrv.hour * 60) + intrv.min + (intrv.sec / 60));
  out_intrv.sec = (((intrv.hour * 60) * 60) + (intrv.min * 60) + intrv.sec);

  printf("Time interval in hour: %.2f\nTime interval in minute: %.2f\nTime interval in second: %d", out_intrv.hour, out_intrv.min, out_intrv.sec);

  return 0;
}
