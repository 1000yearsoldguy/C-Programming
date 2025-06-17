#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char str[MAX_SIZE];
  int i;
  printf("input string:");
  gets(str);
  if (str[i] >= '0' && str[i] <= '9')
    printf("\nNumerical representation of the string:%d", atoi(str));
  else
    printf("\nWrong input.");

  return 0;
}