/*
1. Opening a file.
*/

#include <stdio.h>
int main()
{
  FILE *file;
  file = fopen("file_testing.txt", "w");

  if (file == NULL)
  { // It will be NULL whenever mood isn't mentioned.
    printf("Could not open the file.");
  }
  else
  {
    printf("File opened.\n");
    fclose(file);
  }
  return 0;
}
