#include <stdio.h>
int main()
{
  char chr;
  printf("Enter a character: ");

  while (1)
  {
    scanf("%c", &chr);
    if (chr == 'A')
      break;
    printf("\n%c", chr);
  }
  return 0;
}