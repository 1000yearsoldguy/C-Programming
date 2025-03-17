#include <stdio.h>

int main()
{
  int i = 1;
  char chr;

  while (1)
  {
    scanf(" %c", &chr);
    if (chr == 'A')
      break;
    else
      printf("Input %d: %c\n", i++, chr);
  }
  return 0;
}