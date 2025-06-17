#include <stdio.h>
int main()
{
  char chr;

  printf("Enter any character: ");
  scanf("%c", &chr);

  if (chr >= 'a' && chr <= 'z')
    printf("%c is a small letter", chr);

  else if (chr >= 'A' && chr <= 'Z')
    printf("%c is a capital letter", chr);

  else if (chr >= '0' && chr <= '9')
    printf("%c is a digit", chr);

  else
    printf("It is not a letter nor a digit");

  return 0;
}
