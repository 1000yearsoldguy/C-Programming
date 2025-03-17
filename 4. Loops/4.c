#include <stdio.h>

int main()
{
  int i, n;
  float sum = 0, number;

  printf("Enter number of the elements: ");
  scanf("%d", &n);

  printf("\nEnter %d elements\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%f", &number);
    sum += number;
  }

  float average = sum / n;
  printf("\nAverage of the entered numbers is = %f", average);
  return 0;
}