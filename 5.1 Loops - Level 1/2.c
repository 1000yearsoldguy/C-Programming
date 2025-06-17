#include <stdio.h>
int main()
{
  printf("All odd numbers from 1 to 100 are: \n");
  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 == 1)
      printf("%d\n", i);
  }

  return 0;
}