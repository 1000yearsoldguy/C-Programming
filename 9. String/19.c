#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char str[MAX_SIZE], rev[MAX_SIZE];
  int i, j, len = 0, flag = 0;
  printf("Input String:");
  gets(str);

  // Calculates length for str
  for (i = 0; str[i] != '\0'; i++)
    len++;

  // Reverses str & initializes the reversed string rev
  for (j = 0, i = len - 1; i >= 0; j++, i--)
  {
    rev[j] = str[i];
  }
  rev[j] = '\0';

  printf("\nReversed String: %s", rev);
  return 0;
}

/*With library function:
----------------------
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main(){
    char str[MAX_SIZE];
    printf("Input String:");
    gets(str);

    printf("\nReversed String: %s", strrev(str));
    return 0;
}
*/