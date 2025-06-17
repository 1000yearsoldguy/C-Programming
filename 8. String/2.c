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
    str[i] = str[i] + 32;
    printf("\nString: %s", str);
  }
  else if (str[i] >= 'a' && str[i] <= 'z')
  {
    str[i] = str[i] - 32;
    printf("\nString: %s", str);
  }
  else
    printf("\nWrong input.");

  return 0;
}

/*With library function:
----------------------
#include <stdio.h>
#include <string.h>
int main()
{
 char str[50];
 int i;
 printf("Input string:");
 gets(str);
 if(str[i]>='A' && str[i]<='Z'){
     printf("\nString: %s",strlwr(str));
 }
 else if(str[i]>='a' && str[i]<='z'){
     printf("\nString: %s",strupr(str));
 }
 else
    printf("\nWrong input.");

 return 0;
}
*/