#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int a[MAX_SIZE], b[MAX_SIZE], c[MAX_SIZE], i, n, m;

  // Input size & elements of Array A
  printf("Enter size of the Array A:");
  scanf("%d", &n);
  printf("Enter %d elements in the Array A:", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  // Input size & elements of Array B
  printf("Enter size of the Array B:");
  scanf("%d", &m);
  printf("Enter %d elements in the Array B:", n);
  for (i = 0; i < m; i++)
  {
    scanf("%d", &b[i]);
  }

  // Transfer elements from the Array A to the blank Array C
  for (i = 0; i < n; i++)
    c[i] = a[i];

  // Copy the elements of Array B to Array A
  for (i = 0; i < m; i++)
    a[i] = b[i];

  // Copy the elements of Array C(which is containing the elements of Array A) to Array B
  for (i = 0; i < n; i++)
    b[i] = c[i];

  // Print the elements of Array B as Array A
  printf("\nArray A:");
  for (i = 0; i < m; i++)
    printf("%d ", a[i]);

  // Print the elements of Array A as Array B
  printf("\nArray B:");
  for (i = 0; i < n; i++)
    printf("%d ", b[i]);

  return 0;
}