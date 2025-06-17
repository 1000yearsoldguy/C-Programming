/*
5. Copying a file.
*/

#include <stdio.h>
int main()
{
  FILE *file1, *file2;
  char ch;
  file1 = fopen("file_testing.txt", "r");
  file2 = fopen("copied_file.txt", "w");

  if (file1 == NULL)
  { // It will be NULL whenever mood isn't mentioned.
    printf("Could not open the file.");
  }
  else
  {
    printf("File opened.\n");
    while ((ch = fgetc(file1)) != EOF)
    {
      fputc(ch, file2);
    }
    fclose(file1);
  }
  return 0;
}