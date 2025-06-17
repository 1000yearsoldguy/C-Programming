#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array

int sum(int arr[], int n)
{
  int i, sum = 0;

  // Add each array element to sum
  for (i = 0; i < n; i++)
  {
    sum = sum + arr[i];
  }
  printf("\nSum In Function=%d", sum);
  return sum;
}

int main()
{
  int arr[MAX_SIZE], i, n;

  printf("Size of the array :");
  scanf("%d", &n);
  printf("Enter %d elements in the array:\n", n);

  // Input elements in array
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("\nSum In Main=%d\n", sum(arr, n));

  return 0;
}