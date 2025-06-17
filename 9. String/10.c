#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char str1[MAX_SIZE], str2[MAX_SIZE];
  int i, j;
  printf("Input string 1:");
  gets(str1);
  printf("\nInput string 2:");
  gets(str2);

  for (i = 0; str1[i] != '\0'; i++)
    ; // Here semicolon(;) defines that there's nothing to be executed

  for (j = 0; str2[j] != '\0'; j++)
  {
    str1[i + j] = str2[j];
  }
  str1[i + j] = '\0';

  printf("\nString 1:%s\nString 2:%s", str1, str2);
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
 int i,j;
 printf("Input string 1:");
 gets(str1);
 printf("\nInput string 2:");
 gets(str2);

 printf("\nString 1:%s\nString 2:%s", strcat(str1,str2), str2);
 return 0;
}
*/