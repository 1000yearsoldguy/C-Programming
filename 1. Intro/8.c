/*
8.Program that will declare a variable from each data type: long int, long long int, long double,
short int. Then it will initialize them with values and print them.
    Sample output
    -------------
    The long int value: 2147483647
    The long long int value: 9223372036854775807
    The long double value: 1.1E+4932
    The short int value: 32767
    ----------------------------------------------
    The long int value: -2,147,483,648
    The long long int value: -9223372036854775808
    The long double value: 3.4E-4932
    The short int value: -32768
*/

#include <stdio.h>
int main()
{
  long longint;
  long long longlongint;
  long double longdoubleint;
  short shortint;
  longint = 2147483647;
  longlongint = 9223372036854775807;
  longdoubleint = 1.1E+4932L;
  shortint = 32767;

  printf("The long int value: %ld\nThe long long int value: %lld\nThe long double value: %Lf\nThe short int value: %hd", longint, longlongint, longdoubleint, shortint);
  return 0;
}