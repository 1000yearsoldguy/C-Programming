#include <stdio.h>
#include <math.h>
#define MAX_SIZE 100 // Defines maximum size of array
int TakeInput(int A[])
{
  int n;
  printf("Enter the size of the array:");
  scanf("%d", &n);
  printf("Input the elements of the array:");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);
  }
  return n;
}
float CalcMean(int A[], int n)
{
  float sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + A[i];
  }
  return sum / n;
}
float Calc_Std_deviation(int A[], int n)
{
  float M = CalcMean(A, n);
  float sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + (A[i] - M) * (A[i] - M);
  }
  sum = sum / n;
  sum = sqrt(sum);
  return sum;
}
int main()
{
  int arr[MAX_SIZE], n;
  n = TakeInput(arr);

  printf("Standard Deviation: %.2f\n", Calc_Std_deviation(arr, n));
  return 0;
}