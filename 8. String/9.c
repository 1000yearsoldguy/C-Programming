#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char str1[MAX_SIZE], str2[MAX_SIZE];
  int i;
  printf("Input string 1:");
  gets(str1);
  printf("\nInput string 2:");
  gets(str2);

  for (i = 0; str2[i] != '\0'; i++)
  {
    str1[i] = str2[i];
  }
  str1[i] = '\0';

  printf("\nAfetr copying:\n--------------");
  printf("\nString 1:%s\nString 2:%s\n", str1, str2);
  return 0;
}

/*With library function:
----------------------

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int i;
    printf("Input string 1:");
    gets(str1);
    printf("\nInput string 2:");
    gets(str2);

    printf("\nAfetr copying:\n--------------");
    printf("\nString 1:%s\nString 2:%s\n", strcpy(str1,str2), str2);
    return 0;
}
*/