#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int A[MAX_SIZE], B[MAX_SIZE], C[MAX_SIZE], size1, size2, i, j, k = 0;

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

  // Intersection
  for (i = 0; i < size1; i++)
  {
    for (j = 0; j < size2; j++)
    {
      if (B[j] == A[i])
      {
        C[k] = A[i];
        k++;
        break;
      }
    }
  }
  if (k == 0)
    printf("\nEmpty set.");
  else
    printf("\nIntersection of array A and B: ");
  for (i = 0; i < k; i++)
    printf("%d ", C[i]);
  return 0;
}