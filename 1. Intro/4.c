/*
4.Program that will declare an integer, a floating point number, a character. Then it will
  initialize them with values and print those values.

  Sample Output
  -------------
  The integer value: 5
  The floating point value: 3.141593
  The character value: a
  -----------------------------------
  The integer value: 100
  The floating point value: 1.618000
  The character value: z
*/

#include <stdio.h>
int main()
{
  int integer;
  float float_num;
  char chr;

  integer = 5;
  float_num = 3.141593;
  chr = 'a';
  printf("The integer value: %d\nThe floating value: %f\nThe character value: %c\n", integer, float_num, chr);
  return 0;
}

/*
Another Solution:

#include <stdio.h>
int main()
{
  int integer;
  float float_num;
  char chr;

  integer = 100;
  float_num = 1.618000;
  chr = 'z';
  printf("The integer value: %d\nThe floating value: %f\nThe character value: %c\n", integer, float_num, chr);
  return 0;
}
*/