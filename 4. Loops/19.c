#include <stdio.h>
#include <math.h>

int fact(int n)
{
  int i, fac = 1;
  if (n == 0)
    return 1;
  return n * fact(n - 1);
}

int main()
{
  int x, i, j, nth_term = 4; // Now this program will calculate only up to 4th term of the series.
  float sum = 0;

  printf("Enter the value of x of sin(x) series: ");
  scanf("%d", &x);

  // In case we want to expand the series more than 4th term.
  /* printf("Enter the limit up to which you want to expand the series: ");
  scanf("%d", &nth_term); */

  for (i = 1, j = 1; i <= nth_term; i++, j = j + 2)
  {
    if (i % 2 != 0)
      sum = sum + pow(x, j) / fact(j);
    else
      sum = sum - pow(x, j) / fact(j);
  }

  printf("\nsin(%d): %f\n", x, sum);
  return 0;
}