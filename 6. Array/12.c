#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int arr[MAX_SIZE], n, i, j, temp;

  // Input size of array
  printf("Enter size of array:");
  scanf("%d", &n);

  // Input elements in array
  printf("Enter %d elements in array:", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < n; i++)
  {
    // Place currently selected element array[i] to its correct place.
    for (j = i + 1; j < n; j++)
    {
      // Swap if currently selected array element is not at its correct position.
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  // Print the sorted array
  printf("\nElements of array in ascending order:");
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}