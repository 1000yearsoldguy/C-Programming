#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int arr[MAX_SIZE], size, i;

  // Input size of array
  printf("Enter size of the array:");
  scanf("%d", &size);

  // Input array elements
  printf("Enter elements in array:");
  for (i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  // Replaces elements by -1 and prints
  for (i = 0; i < size; i++)
  {
    if (arr[i] % 3 == 0)
    {
      arr[i] = -1;
    }
    printf("%d ", arr[i]);
  }

  return 0;
}