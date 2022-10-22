#include <stdio.h>

int main()
{
// Create variables
      int i, x, y;                 // Uninitialized variable

// Inputing the Numbers
      system("cls");
      printf("Enter the 1st numbers:");
      scanf("%d", &x);
      printf("Enter the 2nd numbers:");
      scanf("%d", &y);

//Logics
  if (x < y)
  {
    for (i = x; i < y; i++)
      {
        printf("%d, ", i * i);
      }
        printf("Reached!");
  }
  else if (x > y)
  {
    for (i = x; i > y; --i)
      {
        printf("%d, ", i * i);
      }
        printf("Reached!");
  }
  else
  {
        printf("Reached!");
  }

return 0;
}