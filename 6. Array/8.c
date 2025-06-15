#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
int main()
{
  int arr[MAX_SIZE], i, n, value, flag = 0;

  // Input size of the array
  printf("Enter size of the array:");
  scanf("%d", &n);
  // Input elements in array
  printf("Enter %d elements in the array:", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  // Input an element to search
  printf("Enter the value you want to search:");
  scanf("%d", &value);

  // If the searched element exists in the array, flag will be 1
  for (i = 0; i < n; i++)
  {
    if (arr[i] == value)
      flag = 1;
  }

  // Print the index positions of the searched element when flag is 1
  if (flag == 1)
  {
    printf("\nFOUND at the index position:");
    for (i = 0; i < n; i++)
    {
      if (arr[i] == value)
        printf("%d, ", i);
    }
  }

  // Print "NOT FOUND" when flag is 0
  else
  {
    printf("\nNOT FOUND");
  }

  return 0;
}

/*
Another solution of Problem - 8 :

#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of array
    int
    main()
{
  int arr[MAX_SIZE], i, n, value, flag = 0;

  // Input size of the array
  printf("Enter size of the array:");
  scanf("%d", &n);

  // Input elements in array
  printf("Enter %d elements in the array:", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  // Input an element to search
  printf("Enter the value you want to search:");
  scanf("%d", &value);
  // If the searched element exists in the array, flag will be 1
  for (i = 0; i < n; i++)
  {
    if (arr[i] == value)
    {
      flag = 1;
      printf("\nFOUND at the index position: %d", i);
      break;
    }
  }
  // Print the index positions of the searched element when flag is 1
  if (flag == 1)
  {
    for (i++; i < n; i++)
    {
      if (arr[i] == value)
        printf(", %d ", i);
    }
  }
  // Print "NOT FOUND" when flag is 0
  else
  {
    printf("\nNOT FOUND");
  }

  return 0;
}
*/