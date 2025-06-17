#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array

void even_element(int arr[], int n)
{
  int i;

  // Finds and prints even elements
  for (i = 0; i < n; i++)
  {
    if (arr[i] % 2 == 0)
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
  even_element(arr, n);
  return 0;
}