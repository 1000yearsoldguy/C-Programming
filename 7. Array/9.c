#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int arraya[MAX_SIZE], arrayb[MAX_SIZE], i, n;

  // Input size of the array
  printf("Enter size of the array:");
  scanf("%d", &n);

  // Input elements in array
  printf("Enter %d elements in the array:", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arraya[i]);
  }

  // Copy elements from Array A to Array B & print Array A
  printf("\nArray A : ");
  for (i = 0; i < n; i++)
  {
    arrayb[i] = arraya[i];    // Coping elements from Array A to Array B
    printf("%d ", arraya[i]); // Printing Array A
  }

  // Print array B in reversed order
  printf("\nArray B : ");
  for (i = n - 1; i >= 0; i--)
  {
    printf("%d ", arrayb[i]);
  }

  return 0;
}