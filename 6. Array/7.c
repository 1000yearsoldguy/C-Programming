#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int i, vowels = 0, n;
  char line[MAX_SIZE];

  // Input size of the array
  printf("Enter size of the array:");
  scanf("%d", &n);

  // Input elements in array
  printf("Enter %d elements in the array:", n);
  for (i = 0; i < n; i++)
  {
    scanf("%c", &line[i]);
  }

  for (i = 0; i != '0'; i++) //------>It could also: for(i = 0; line[i] != '0'; ++i)
  {
    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
        line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
        line[i] == 'U')
      ++vowels;
  }
  printf("Count: %d\n", vowels);
  return 0;
}