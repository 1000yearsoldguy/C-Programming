#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int arr[MAX_SIZE], i, n, sum = 0;

  // Input size of the array
  printf("Enter size of the array:");
  scanf("%d", &n);

  // Input elements in array
  printf("Enter %d elements in the array:", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  // Add each even numbers of the array to sum
  for (i = 0; i < n; i++)
  {
    if (arr[i] % 2 == 0)
      sum = sum + arr[i];
  }
  printf("Sum of all the even integers of array = %d", sum);
  return 0;
}