#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char str[MAX_SIZE];
  int i;
  printf("Input a string:");
  gets(str);

  printf("\nWords contained in the string in separate lines:\n");
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ' ')
      printf("\n");
    else
      putchar(str[i]); // printf("%c", str[i]); Also could be written
  }
  return 0;
}