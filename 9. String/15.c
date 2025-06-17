#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char str1[MAX_SIZE], str2[MAX_SIZE], temp1, temp2;
  int i, j, str1len = 0, str2len = 0, flag = 0;

  printf("String 1:");
  gets(str1);
  printf("String 2:");
  gets(str2);

  // Calculate length of the both strings
  for (i = 0; str1[i] != '\0'; i++)
    str1len++;
  for (i = 0; str2[i] != '\0'; i++)
    str2len++;

  if (str1len == str2len)
  {
    // Sorts str1
    for (i = 0; i < str1len - 1; i++)
    {
      for (j = i + 1; j < str1len; j++)
      {
        if (str1[i] > str1[j])
        {
          temp1 = str1[i];
          str1[i] = str1[j];
          str1[j] = temp1;
        }
      }
    }
    // Sorts str2
    for (i = 0; i < str2len - 1; i++)
    {
      for (j = i + 1; j < str2len; j++)
      {
        if (str2[i] > str2[j])
        {
          temp2 = str2[i];
          str2[i] = str2[j];
          str2[j] = temp2;
        }
      }
    }
    // Comparing str1 & str2
    for (i = 0; str1[i] || str2[i]; i++)
    {
      if (str1[i] > str2[i])
      {
        flag = 1;
        break;
      }
      if (str1[i] < str2[i])
      {
        flag = -1;
        break;
      }
    }

    if (flag == 0)
      printf("\nYes. Given words are anagrams.");
    else
      printf("\nNo. Given words are not anagrams.");
  }

  else
    printf("\nNo. Given words are not anagrams.");

  return 0;
}

/*With library function:
----------------------

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main() {
  char str1[MAX_SIZE], str2[MAX_SIZE], temp1, temp2;
  int i, j, str1len, str2len, flag=0;

  printf("String 1:");
  gets(str1);
  printf("String 2:");
  gets(str2);

  // Calculate length of the both strings
  str1len=strlen(str1);
  str2len=strlen(str2);

  if(str1len == str2len)
    {
      // Sorts str1
      for(i = 0; i < str1len-1; i++) {
        for(j = i+1; j < str1len; j++) {
            if(str1[i] > str1[j]) {
                temp1 = str1[i];
                str1[i] = str1[j];
                str1[j] = temp1;
            }
        }
      }
      // Sorts str2
      for (i = 0; i < str2len-1; i++) {
        for (j = i+1; j < str2len; j++) {
            if (str2[i] > str2[j]) {
                temp2 = str2[i];
                str2[i] = str2[j];
                str2[j] = temp2;
            }
        }
      }
      // Comparing str1 & str2
      flag=strcmp(str1,str2);

      if(flag == 0)
        printf("\nYes. Given words are anagrams.");
      else
        printf("\nNo. Given words are not anagrams.");
    }

    else
       printf("\nNo. Given words are not anagrams.");

   return 0;
}
*/