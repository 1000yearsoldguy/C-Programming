#include <stdio.h>
#define MAX_SIZE 100 // Defines maximum size of the array
struct rooms
{
  int num;
  int length;
  int width;
};

int main()
{
  struct rooms room[MAX_SIZE];
  int area[MAX_SIZE], ind_max, max;
  int i, n;
  printf("How many room info you want collect? : ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("\n\nEnter Number of the room %d: ", i + 1);
    scanf("%d", &room[i].num);
    printf("Enter Length of the room %d: ", i + 1);
    scanf("%d", &room[i].length);
    printf("Enter Width of the room %d: ", i + 1);
    scanf("%d", &room[i].width);
  }
  max = 0;
  for (i = 1; i < n; i++)
  {
    area[i] = room[i].length * room[i].width;
    if (area[i] > max)
    {
      max = area[i];
      ind_max = i;
    }
  }
  printf("\nRoom with the maximum area: %d %d %d", room[ind_max].num, room[ind_max].length, room[ind_max].width);
  return 0;
}