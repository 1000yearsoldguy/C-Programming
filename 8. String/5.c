#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char str[MAX_SIZE];
  int i;

  printf("Input anything:");
  gets(str);

  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] = str[i] + 32;
    }
  }

  printf("\nConvert all the letters in to lowercase: %s", str);
  return 0;
}

/*With library function:
----------------------

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
 char str[MAX_SIZE];

 printf("Input anything:");
 gets(str);

 printf("\nLength of the String: %s",strlwr(str));
 return 0;
}
*/