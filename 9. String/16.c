#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
  char str[MAX_SIZE], oldChar, newChar;
  int i;

  printf("Enter any string:");
  gets(str);

  printf("Enter character to replace:");
  oldChar = getchar();

  // Dummy getchar() to eliminate extra ENTER character
  getchar();

  printf("Enter character to replace '%c' with:", oldChar);
  newChar = getchar();

  // Run till end of string
  for (i = 0; str[i] != '\0'; i++)
  {
    // If occurrence of character is found
    if (str[i] == oldChar)
      str[i] = newChar;
  }
  printf("\n\nString after replacing '%c' with '%c' :\n%s", oldChar, newChar, str);

  return 0;
}