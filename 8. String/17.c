#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
  char s[MAX_SIZE];
  int i, vowels = 0, consonants = 0;
  printf("Input string:");
  gets(s);
  for (i = 0; s[i] != '\0'; i++)
  {
    if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
    {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        vowels++;
      else
        consonants++;
    }

    else
      vowels == 0 == consonants;
  }

  if (vowels == 0 && consonants == 0)
    printf("\nNo alphabets found.");

  else
  {
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
  }

  return 0;
}