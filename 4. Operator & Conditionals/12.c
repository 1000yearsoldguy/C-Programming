#include <stdio.h>
int main()
{
  char chr;
  printf("Enter any letter between A-Z or a-z : ");
  scanf("%c", &chr);
  if (chr >= 'a' && chr <= 'z')
  {
    chr = chr - 32;
    printf("Capital version is %c", chr);
  }
  else if (chr >= 'A' && chr <= 'Z')
  {
    chr = chr + 32;
    printf("Small version is %c\n", chr);
  }
  else
  {
    printf("Entered character is not a letter\n");
  }
  return 0;
}