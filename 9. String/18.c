#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char s[MAX_SIZE];
  int i, count = 0, count2 = 0;
  printf("Input string:");
  gets(s);
  for (i = 0; s[i] != '\0'; i++)
  {
    if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
      count++;
    if (s[i] >= '0' && s[i] <= '9')
      count2++;
  }

  if (count > 0 && count2 > 0)
    printf("\nYes.");
  else
    printf("\nNo.");

  return 0;
}