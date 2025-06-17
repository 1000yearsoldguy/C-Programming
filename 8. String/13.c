#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char str1[MAX_SIZE], str2[MAX_SIZE];
  int i, j, flag = 0;
  printf("String 1:");
  gets(str1);
  printf("String 2:");
  gets(str2);

  // Make both of the string lowercase
  for (i = 0; str1[i] != '\0', str2[i] != '\0'; i++)
  {
    if (str1[i] >= 'A' && str1[i] <= 'Z')
    {
      str1[i] = str1[i] + 32;
    }

    if (str2[i] >= 'A' && str2[i] <= 'Z')
    {
      str2[i] = str2[i] + 32;
    }
  }
  // Compares
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
    printf("\nYes.Strings are the same ignoring case.");
  else
    printf("\nNo.Strings are not the same ignoring case.");

  return 0;
}

/*With library function:
----------------------

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main(){
    char str1[MAX_SIZE], str2[MAX_SIZE];
    printf("String 1:");
    gets(str1);
    printf("String 2:");
    gets(str2);

    if(strcmp(strlwr(str1),strlwr(str2)) == 0)
        printf("\nYes.Strings are the same ignoring case.");
    else
        printf("\nNo.Strings are not the same ignoring case.");
    return 0;
}
*/