#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char str[MAX_SIZE], rev[MAX_SIZE];
  int i, j, len = 0, flag = 0;
  printf("Input String:");
  gets(str);

  // Calculates length for str
  for (i = 0; str[i] != '\0'; i++)
    len++;

  // Reverses str & initializes the reversed string rev
  for (j = 0, i = len - 1; i >= 0; j++, i--)
  {
    rev[j] = str[i];
  }
  rev[j] = '\0';

  // Compares str & rev
  for (i = 0; str[i] || rev[i]; i++)
  {
    if (str[i] > rev[i])
    {
      flag = 1;
      break;
    }
    if (str[i] < rev[i])
    {
      flag = -1;
      break;
    }
  }
  if (flag == 0)
    printf("\nPalindrome.");
  else
    printf("\nNot Palindrome");

  return 0;
}

/*With library function:
----------------------

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
    char str[MAX_SIZE], reverse[MAX_SIZE];
    int flag;

    // Input string from user
    printf("Input anything:");
    gets(str);


    strcpy(reverse, str); //Copies original string to reverse
    strrev(reverse);     //Finds the reverse of string

    flag = strcmp(str, reverse); //Checks whether both are equal or not

    if(flag == 0)
        printf("\nPalindrome.");
    else
        printf("\nNot Palindrome.");

    return 0;
}
*/