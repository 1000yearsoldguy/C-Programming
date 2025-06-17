#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int A[MAX_SIZE], B[MAX_SIZE], size1, size2, i, j;

  // Input size of array
  printf("Enter size of the array-1:");
  scanf("%d", &size1);
  // Input array elements
  printf("Enter elements in array-1:");
  for (i = 0; i < size1; i++)
  {
    scanf("%d", &A[i]);
  }

  // Input size of array
  printf("Enter size of the array-2:");
  scanf("%d", &size2);
  // Input array elements
  printf("Enter elements in array-2:");
  for (j = 0; j < size2; j++)
  {
    scanf("%d", &B[j]);
  }

  // Difference
  printf("\nDifference of array A and B or (A-B): ");
  for (i = 0; i < size1; i++)
  {
    for (j = 0; j < size2; j++)
    {
      if (A[i] == B[j])
        break;
    }
    if (j == size2)
      printf("%d ", A[i]);
  }
  return 0;
}