#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size string
int str_length(char n[])
{
  int i;
  for (i = 0; n[i] != '\0'; i++)
    ;
  return i;
}

int find_substr(char a[], char b[])
{
  int n1 = str_length(a);
  int n2 = str_length(b);
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
