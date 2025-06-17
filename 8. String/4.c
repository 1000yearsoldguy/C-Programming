#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char str[MAX_SIZE];
  int i;

  printf("Input anything:");
  gets(str);
  for (i = 0; str[i] != '\0'; i++); // Here semicolon(;) defines that there's nothing to be executed

  printf("\nLength of the String: %d", i);
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

 printf("\nEntered String:%d",strlen(str));
 return 0;
}
*/