/*
4. Write a C program that prints the content of a given array in reverse order.
   "Use pointer decrement instead of array indexing."
*/

#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int arr[MAX_SIZE], i, n, *p = arr;

  printf("Enter size for the array:");
  scanf("%d", &n);

  printf("Enter the elements of the array:");
  for (i = 0; i < n; i++)
  {
    scanf("%d", p);
    p++;
  }
  p = &arr[n - 1]; // Make sure that pointer again points back to first array element
  printf("\nEntered array:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", *p);
    p--;
  }

  return 0;
}