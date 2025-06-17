/*
4. Reading a file.
*/

#include <stdio.h>
int main()
{
  FILE *file;
  char ch;
  file = fopen("file_testing.txt", "r");

  if (file == NULL)
  { // It will be NULL whenever mood isn't mentioned.
    printf("Could not open the file.");
  }
  else
  {
    printf("File opened.\n");
    while ((ch = fgetc(file)) != EOF)
    {
      printf("%c", ch);
    }
    fclose(file);
  }
  return 0;
}