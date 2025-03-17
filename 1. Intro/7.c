/*
7.Program that will receive the values of an integer, a floating point number, a character from
  the keyboard and print those values.
      Sample input               	Sample output
      ------------	           	-------------
            5		       	        The integer value: 5
            3.141593		        The floating point value: 3.141593
            a		                The character value: a
    ----------------------------------------------------------
      100  1.618  z	      	    The integer value: 100
                                The floating point value: 1.618000
                                The character value: z
*/

#include <stdio.h>
int main()
{
  int integer;
  float floating_num;
  char character;
  printf("Input  an integer, a floating point number, a character:");
  scanf("%d %f %c", &integer, &floating_num, &character);
  printf("The integer value: %d\nThe floating point value: %f\nThe character value: %c", integer, floating_num, character);
  return 0;
}