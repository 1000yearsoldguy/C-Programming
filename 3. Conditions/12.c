#include <stdio.h>
int main()
{
  int choice;
  float a, b;

  printf("Enter two operands:");
  scanf("%f %f", &a, &b);

  printf("Choice-1, 2, 3, 4 are for performing addition, subtraction, multiplication, division respectively:");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    printf("\nAddition: %f\n", a + b);
    break;
  case 2:
    printf("\nSubtraction: %f\n", a - b);
    break;
  case 3:
    printf("\nMultiplication: %f\n", a * b);
    break;
  case 4:
    printf("\nDivision: %f\n", a / b);
    break;
  default:
    printf("Error! Invalid choice.\n");
  }
  return 0;
}