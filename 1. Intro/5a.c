/*
5.Program that will do the followings:
  a) Declare a variable uninitialized
  b) Declare and initialize a variable in one statement
  c) Declare and initialize multiple variables with different values in one statement
  d) Declare and initialize multiple variables with the same value in one statement
*/
#include <stdio.h>
int main()
{
  int avalue; //<---[Just declaring a variable without initializing]
  printf("An uninitialized variable= %d", avalue);
  return 0;
}