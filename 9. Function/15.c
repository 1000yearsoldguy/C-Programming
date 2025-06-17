#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array

void sortasc(int arr[], int n)
{
  int i, j, temp;

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
  sortasc(arr, n);
  return 0;
}