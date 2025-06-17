#include <stdio.h>
char display(char x)
{
  printf("Value received from main:%c", x);
}
int main()
{
  char a;
  printf("Input a character:");
  scanf("%c", &a);
  display(a);
  return 0;
}