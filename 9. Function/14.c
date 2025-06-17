#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array

void multi2(int arr[], int n)
{
  int i;

  printf("\nArray elements multiplied by 2 : ");
  for (i = 0; i < n; i++)
  {
    arr[i] = 2 * arr[i];
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
  multi2(arr, n);
  return 0;
}