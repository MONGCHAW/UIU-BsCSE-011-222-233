#include <stdio.h>

int main()
{
// Create variables
    char x, y = 'A'; 
    int n = 1;                 // Uninitialized variable

// Inputing the Numbers
        scanf("%c", &x);
      
//Logics
  while (x != y)
    {
        printf("Input %d:%c\n",n++, x);
        getchar();
        scanf("%c",&x);
    }
  return 0;
}