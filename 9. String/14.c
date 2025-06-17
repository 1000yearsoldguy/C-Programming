#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char str1[MAX_SIZE], str2[MAX_SIZE];
  int i, flag = 0;
  printf("Input actual password:");
  gets(str1);
  printf("Input password:");
  gets(str2);

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
    printf("\nLogin successful.");
  else
    printf("\nLogin failed.");

  return 0;
}

/*With library function:
----------------------

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main(){
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int i, flag;
    printf("Input actual password:");
    gets(str1);
    printf("Input password:");
    gets(str2);

    flag = strcmp(str1,str2);

    if(flag == 0)
        printf("\nLogin successful.");
    else
        printf("\nLogin failed.");

    return 0;
}
*/