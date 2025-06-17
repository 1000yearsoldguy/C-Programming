#include <stdio.h>
int greet(int frm, int to)
{
  if (frm == to + 1)
    return 0;
  printf("Hello %d\n", frm);
  greet(frm + 1, to);
}

int main()
{
  int frm, to;
  printf("Set a range for times you want to print Hello? :");
  scanf("%d%d", &frm, &to);
  greet(frm, to);
  return 0;
}
