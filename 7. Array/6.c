#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array

int main()
{
  int arr[MAX_SIZE];
  int i, max, min, size, ind_max, ind_min;
  /* Input size of the array */
  printf("Enter size of the array:");
  scanf("%d", &size);

  // Input array elements
  printf("Enter elements in the array:");
  for (i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  // Assume first element as maximum and minimum
  max = arr[0];
  min = arr[0];

  // Find maximum and minimum in all array elements.
  for (i = 1; i < size; i++)
  {
    // If current element is greater than max
    if (arr[i] > max)
    {
      max = arr[i];
      ind_max = i;
    }

    // If current element is smaller than min
    if (arr[i] < min)
    {
      min = arr[i];
      ind_min = i;
    }
  }

  // Print maximum and minimum element
  printf("\nMaximum: %d & Index: %d\n", max, ind_max);
  printf("Minimum: %d & Index: %d\n", min, ind_min);

  return 0;
}