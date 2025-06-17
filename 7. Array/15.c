#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int A[MAX_SIZE], B[MAX_SIZE], C[MAX_SIZE], size1, size2, i, j, n, k = 0;

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
  // Merge(Append 2 arrays
  for (i = 0; i < size1; i++)
  {
    C[k] = A[i];
    k++;
  }
  for (j = 0; j < size2; j++)
  {
    C[k] = B[j];
    k++;
  }

  // Find duplicate elements in array
  n = size1 + size2;
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      // If any duplicate found
      if (C[i] == C[j])
      {
        // Delete the current duplicate element
        for (k = j; k < n; k++)
        {
          C[k] = C[k + 1];
        }
        // Decrement size after removing duplicate element
        n--;
        // If shifting of elements occur then don't increment j
        j--;
      }
    }
  }
  printf("\nUnion of array A and B:");
  for (i = 0; i < n; i++)
  {
    printf("%d ", C[i]);
  }
  return 0;
}