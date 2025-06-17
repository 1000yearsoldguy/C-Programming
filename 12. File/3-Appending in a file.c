/*
3. Appending in a file.
*/

#include <stdio.h>
int main()
{
  FILE *file;
  char ch;
  file = fopen("file_testing.txt", "a");

  if (file == NULL)
  { // It will be NULL whenever mood isn't mentioned.
    printf("Could not open the file.");
  }
  else
  {
    printf("File opened.\n");
    while ((ch = getchar()) != 124)
    { // "shift + \ = |" is equal to 124
      fputc(ch, file);
    }
    fclose(file);
  }
  return 0;
}