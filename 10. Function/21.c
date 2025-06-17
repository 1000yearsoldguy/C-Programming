#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Defines maximum size string
int find_substr(char a[], char b[])
{
  int n1 = strlen(a);
  int n2 = strlen(b);
  for (int i = 0; i <= n1 - n2; i++)
  {
    int flag = 0;
    for (int j = 0; j < n2; j++)
    {
      if (a[i + j] != b[j])
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
    {
      return 1;
    }
  }
  return 0;
}

int main()
{
  char a[MAX_SIZE], b[MAX_SIZE];
  printf("Input String A:");
  gets(a);
  printf("Input String B:");
  gets(b);

  printf("%d", find_substr(a, b));
  return 0;
}