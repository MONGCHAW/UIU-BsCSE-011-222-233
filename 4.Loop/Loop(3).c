#include <stdio.h>

int main()
{
// Create variables
      int i, n;                 // Uninitialized variable

// Inputing the Numbers
      system("cls");
      printf("Enter the Nth numbers:");
      scanf("%d", &n);

//Logics
  for (i = 1; i <= n; ++i)
    {
      printf("%d, ",(int)(i%2));
    }
return 0;
}
