#include <stdio.h>
int n, b;
char result[100];

void Show_Converted_Number()
{
  printf("\nConverted number: %s\n", result);
}

void Convert_Number()
{
  int q, r, i = 0, j, len;
  char temp;

  if (b == 0)
    printf("\nBase not within proper range.");
  // Converts number
  else
  {
    while (n)
    {
      q = n / b;
      r = n % b;
      if (r >= 10)
        result[i] = r - 10 + 'a';
      else
        result[i] = r + '0';
      i++;
      n = q;
    }
    // Makes the reverse number consistent
    len = i;
    for (i = 0; i < len / 2; i++)
    {
      j = len - i - 1;
      temp = result[i];
      result[i] = result[j];
      result[j] = temp;
    }
    result[len] = '\0';
  }
}

void Get_Number_And_Base()
{
  printf("Input the number you want to convert:");
  scanf("%d", &n);
  printf("Input the base to convert:");
  scanf("%d", &b);
}

int main()
{
  Get_Number_And_Base();
  Convert_Number();
  Show_Converted_Number();
  return 0;
}