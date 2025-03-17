#include <stdio.h>

int main()
{
  int X, Y, N, i;

  printf("Player-1, pick a number: ");
  scanf("%d", &X);
  printf("How many times Player-2 can try?: ");
  scanf("%d", &N);

  for (i = N - 1; i >= 0; i--)
  {
    int guess;
    scanf("%d", &guess);
    if (guess == X)
    {
      printf("\nRight, Player-2 wins!");
      break;
    }
    else
    {
      printf("\nWrong, %d Choice(s) Left!\n", i);
    }
    if (i == 0)
    {
      printf("\nPlayer-1 wins!\n");
    }
  }

  return 0;
}