#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char str[MAX_SIZE];
  int i;

  printf("Input anything:");
  gets(str);

  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = str[i] - 32;
    }

    else if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] = str[i] + 32;
    }
  }

  printf("\nToggled cases of all the letters: %s", str);
  return 0;
}