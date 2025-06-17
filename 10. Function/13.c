#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array

int minimum(int arr[], int n)
{
  int i, min;
  // Assume first element as minimum
  min = arr[0];

  for (i = 0; i < n; i++)
  { // If current element is smaller than min
    if (arr[i] < min)
      min = arr[i];
  }
  return min;
}
int main()
{
  int arr[MAX_SIZE], i, n;

  printf("Size of the array:");
  scanf("%d", &n);
  printf("Enter %d elements in the array:\n", n);
  // Input elements in array
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Minimum Value: %d", minimum(arr, n));
  return 0;
}
