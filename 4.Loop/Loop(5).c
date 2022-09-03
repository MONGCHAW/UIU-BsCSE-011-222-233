#include <stdio.h>

int main()
{
// Create variables
    int x, y;                 // Uninitialized variable

// Inputing the Numbers
    printf("Enter the x numbers:");
    scanf("%d", &x);
    printf("Enter the y number:");
    scanf("%d", &y);

//Logics
    while (x != y)
    {
        printf("%d,",x * x );
        if (x < y)
        {
            x++;
        }
        else if (x > y)
        {
            x--;
        }
    }
    printf("Reached");
    return 0;
}
