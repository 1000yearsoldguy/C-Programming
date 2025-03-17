#include <stdio.h>
int main()
{
  int x, n1, n2, n3, flag = 0;

  printf("Player-1, pick a number: ");
  scanf("%d", &x);
  printf("Player-2, guess the number: ");
  scanf("%d", &n1);

  if (x == n1)
    flag = 1;

  if (flag == 0)
  {
    printf("\nWrong, 2 Chance(s) Left!\nPlayer-2 will guess again: ");
    scanf("%d", &n2);
    if (x == n2)
      flag = 1;
  }

  if (flag == 0)
  {
    printf("\nWrong, 1 Chance(s) Left!\nPlayer-2 will guess again: ");
    scanf("%d", &n3);
    if (x == n3)
      flag = 1;
  }

  if (flag == 1)
    printf("\nRight, Player-2 wins!\n");
  else
    printf("\nWrong, 0 Chance(s) Left!\nPlayer-1 wins!\n");

  return 0;
}