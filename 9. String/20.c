#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char str1[MAX_SIZE], str2[MAX_SIZE], str3[MAX_SIZE];
  int i, str2len, str1len, j, k, count = 0;
  printf("Input string:");
  gets(str1);
  printf("Input sub-string:");
  gets(str2);

  str1len = strlen(str1);
  str2len = strlen(str2);

  for (i = 0; i < (str1len - str2len) + 1; i++)
  {
    if (str1[i] == str2[0])
    {
      for (j = i, k = 0; j < str2len + i, k < str2len; j++, k++)
        str3[k] = str1[j];
      str3[str2len] = '\0';
      if (strcmp(str3, str2) == 0)
      {
        count++;
      }
    }
  }
  printf("\nOccurrences of %s in %s= %d", str2, str1, count);
  return 0;
}