#include <stdio.h>
int main()
{
  char operator;
  double number1, number2;
  printf("Enter an operator (+, -, *,/): ");
  scanf("%c", &operator);
  printf("\nEnter two operands: ");
  scanf("%lf %lf", &number1, &number2);

  switch (operator)
  {
  case '+':
    printf("%lf + %lf\nAddition: %lf\n", number1, number2, number1 + number2);
    break;
  case '-':
    printf("%lf - %lf\nSubtraction: %lf\n", number1, number2, number1 - number2);
    break;
  case '*':
    printf("%lf * %.1lf\nMultiplication: %lf\n", number1, number2, number1 * number2);
    break;
  case '/':
    if (number2 == 0)
      printf("%lf / %lf\nDivision: Zero as divisor is not valid!\n", number1, number2);
    else
      printf("%lf / %lf\nDivision: %lf\n", number1, number2, number1 / number2);
    break;
  default:
    printf("Error! operator is not correct\n");
  }

  return 0;
}