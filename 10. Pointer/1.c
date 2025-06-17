/*
1. Write a C program that prints the content of a given array.
   "Use pointer addition instead of array indexing."
*/

#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int arr[MAX_SIZE], i, n, *ptr = arr;
  printf("Enter size for the array:");
  scanf("%d", &n);

  printf("Enter the elements of the array:");
  for (i = 0; i < n; i++)
  {
    scanf("%d", (ptr + i));
  }
  printf("\nEntered array:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", *(ptr + i));
  }

  return 0;
}