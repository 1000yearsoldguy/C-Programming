#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int arr[MAX_SIZE];
  int n, i, j, k;

  printf("Enter size of the array:");
  scanf("%d", &n);

  printf("Enter elements in array:");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  // Find duplicate elements in array
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      // If any duplicate found
      if (arr[i] == arr[j])
      {
        // Delete the current duplicate element
        for (k = j; k < n; k++)
        {
          arr[k] = arr[k + 1];
        }
        // Decrement size after removing duplicate element
        n--;
        // If shifting of elements occur then don't increment j
        j--;
      }
    }
  }

  printf("\nArray elements after deleting duplicates:");
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}