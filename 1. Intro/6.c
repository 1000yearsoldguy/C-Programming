/*
6.Program that will take your age in year(s) as input and print it:
            Sample input   Sample output
            ------------   -------------
                20 	       My age is: 20
                21 	       My age is: 21
*/

#include <stdio.h>
int main()
{
  int age;
  printf("Enter your age in year(s):");
  scanf("%d", &age);
  printf("My age is: %d\n", age);
  return 0;
}