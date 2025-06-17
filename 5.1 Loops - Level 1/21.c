#include <stdio.h>
int main()
{
  int binary, decimal = 0, mult = 1, digit;

  printf("Enter a binary number: ");
  scanf("%d", &binary);

  while (binary != 0)
  {
    digit = binary % 10;
    decimal = decimal + digit * mult;
    binary = binary / 10;
    mult = mult * 2;
  }
  printf("\nDecimal of entered Binary number is %d \n", decimal);
  return 0;
}

/*Another solve for no.21:
------------------------
#include <stdio.h>
#include<math.h>
int main()
{
  int binary, digit, decimal=0, power=0;
  printf("Enter the Binary number: ");
  scanf(" %d", &binary);

  while(binary!=0)
  {
    digit = binary%10;
    decimal = decimal + digit*pow(2, power);
    power++;
    binary = binary/10;
  }
  printf("\nDecimal of entered Binary number is %d\n", decimal);
  return 0;
}
*/