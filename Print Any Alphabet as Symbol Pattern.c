#include <stdio.h>
#include <string.h>
#include <ctype.h>
main()
{
  int i, j, k;
  char c, flag = 0, str[26];
  // printf("Enter Alphabet\n");
  // scanf("%c",&c);
  printf("Enter Word\n");
  gets(str);
  for (k = 0; str[k] != '\0'; k++)
  {
    c = toupper(str[k]);
    for (i = 0; i < 5; i++)
    {
      for (j = 0; j < 5; j++)
      {
        // For Row 1
        if (i == 0)
        {
          flag = 0;
          if (j == 0)
          {
            if (c >= 'A' && c <= 'Z')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 1)
          {
            if ((c >= 'A' && c <= 'J' && c != 'H') || (c >= 'N' && c <= 'T') || c == 'Z')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 2)
          {
            if ((c >= 'A' && c <= 'J' && c != 'H') || (c >= 'N' && c <= 'T') || c == 'Z')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 3)
          {
            if ((c >= 'A' && c <= 'K' && c != 'H') || (c >= 'O' && c <= 'T' && c != 'Q') || c == 'Z')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 4)
          {
            if (c != 'L' && c != 'Q')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (flag == 0)
            printf("  ");
        }

        // For Second row
        if (i == 1)
        {
          flag = 0;
          if (j == 0)
          {
            if (c != 'I' && c != 'J' && c != 'T' && c != 'X' && c != 'Z')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 1)
          {
            if (c == 'M' || c == 'X')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 2)
          {
            if (c == 'I' || c == 'J' || c == 'T' || c == 'K' || c == 'N' || c == 'Q')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 3)
          {
            if (c == 'M')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 4)
          {
            int x = (c == 'C' || (c >= 'E' && c <= 'G') || (c >= 'I' && c <= 'L') || c == 'Q' || c == 'S' || c == 'T' || c == 'X');
            if (x != 1)
            {
              flag = 1;
              printf("* ");
            }
          }
          if (flag == 0)
            printf("  ");
        }
        // For third row
        if (i == 2)
        {
          flag = 0;
          if (j == 0)
          {
            if (c != 'I' && c != 'J' && c != 'T' && c != 'X')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 1)
          {
            if (c == 'A' || c == 'B' || (c >= 'E' && c <= 'H') || c == 'K' || (c >= 'P' && c <= 'S') || c == 'Y' || c == 'Z')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 2)
          {
            if (c != 'C' && c != 'D' && c != 'K' && c != 'L' && c != 'O' && (!(c >= 'U' && c <= 'V')))
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 3)
          {
            if (c == 'A' || c == 'B' || (c >= 'E' && c <= 'H') || (c > 'M' && c <= 'S' && c != 'N' && c != 'O') || (c >= 'Y' && c <= 'Z'))
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 4)
          {
            if (c != 'C' && (!(c >= 'I' && c <= 'L')) && c != 'T' && c != 'X')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (flag == 0)
            printf("  ");
        }
        // For fourth row
        if (i == 3)
        {
          flag = 0;
          if (j == 0)
          {
            if ((c >= 'A' && c <= 'H') || (c >= 'K' && c <= 'R') || c == 'U' || c == 'W' || c == 'Z')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 1 || j == 3)
          {
            if (c == 'V' || c == 'X')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 2)
          {
            if (c == 'N' || c == 'R' || c == 'T' || c == 'W' || (c >= 'I' && c <= 'K') || c == 'Q')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 4)
          {
            if ((c >= 'A' && c <= 'H' && c != 'C' && c != 'E' && c != 'F') || (c >= 'M' && c <= 'S' && c != 'P' && c != 'R') || c == 'U' || c == 'W' || c == 'Y')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (flag == 0)
            printf("  ");
        }

        // For Fifth row
        if (i == 4)
        {
          flag = 0;
          if (j == 0)
          {
            if (c != 'V' && c != 'T')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 1)
          {
            if ((c >= 'B' && c <= 'L' && c != 'F' && c != 'H' && c != 'K') || c == 'O' || c == 'Q' || c == 'S' || (c >= 'U' && c <= 'Z' && c != 'V' && c != 'X'))
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 2)
          {
            if (c != 'A' && c != 'F' && c != 'H' && c != 'K' && c != 'M' && c != 'P' && c != 'R' && c != 'X')
            {
              flag = 1;
              printf("* ");
            }
          }
          if (j == 3)
          {
            if ((c >= 'B' && c <= 'G' && c != 'F') || c == 'I' || (c >= 'K' && c <= 'S' && c != 'P' && c != 'M' && c != 'Q') || (c >= 'U' && c <= 'Z' && c != 'V' && c != 'X'))
            {
              flag = 1;
              printf("* ");
            }
          }

          if (j == 4)
          {
            if ((c >= 'A' && c <= 'I' && c != 'F') || (c >= 'K' && c <= 'S' && c != 'P' && c != 'R') || (c >= 'U' && c <= 'Z' && c != 'V'))
            {
              flag = 1;
              printf("* ");
            }
          }
          if (flag == 0)
            printf("  ");
        }
      }
      printf("\n");
    }
    printf("\n");
  }
}
