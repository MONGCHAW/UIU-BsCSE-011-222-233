#include <stdio.h>
#include <math.h>
int main()
{
// Create variables
    int x, y, ans ;                  // Uninitialized variable

// Inputing the Numbers
      printf("Enter the the number of x:");
        scanf("%d", &x);
      printf("Enter the the number of x:");
        scanf("%d", &y);
      
//Logics
  ans = pow(x,y);
  printf("%d", ans ) ;

 return 0;
}