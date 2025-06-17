#include <stdio.h>
int main()
{
  int i, n;
  float sum = 0, numbers, Average;

  printf("Enter number of the elements:  ");
  scanf("%d", &n);

  printf("\nEnter %d elements\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%f", &numbers);
    sum = sum + numbers;
  }
  Average = sum / n;
  printf("\n Average of the entered numbers is =  %f", Average);
  return 0;
}