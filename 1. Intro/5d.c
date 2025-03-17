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
  int variable1 = 1, variable2 = 1, variable3 = 1; //<---[Declaring & initializing multiple variables with same value in one statement]
  printf("Initialized multiple variables with the same value in one statement: variable1=%d,variable2=%d,variable3=%d", variable1, variable2, variable3);
  return 0;
}