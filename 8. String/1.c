#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char str[MAX_SIZE];
  int i;
  printf("Input string:");
  gets(str);
  if (str[i] >= 'A' && str[i] <= 'Z')
  {
    str[i] = str[i] + 32;
    printf("\nString: %s", str);
  }
  else
    printf("\nWrong input.");

  return 0;
}

/*With library function :
-- -- -- -- -- -- -- --
#include <stdio.h>
#include <string.h>
int main()
{
  char str[50];
  int i;
  printf("Input string:");
  gets(str);
  if (str[i] >= 'A' && str[i] <= 'Z')
  {
    strlwr(str);
    printf("\nString: %s", str);
  }
  else
    printf("\nWrong input.");

  return 0;
}
*/