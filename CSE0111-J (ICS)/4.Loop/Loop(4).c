#include <stdio.h>

int main()
{
// Create variables
      double count, n, avg, num, sum = 0;                 // Uninitialized variable

// Inputing the Numbers
      system("cls");
      printf("Enter the Nth numbers:");
      scanf("%lf", &n);

//Logics
  for (double count = 1; count <= n; count++ )
    {
      scanf("%lf", &num);
      sum += num;
    }
    printf("AVG of %.0lf inputs:%lf", n, sum/n);

return 0;
}