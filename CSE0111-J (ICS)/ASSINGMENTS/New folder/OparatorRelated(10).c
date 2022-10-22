#include <stdio.h>
#include <stdlib.h>
int main()
{
// Create variables

    int a, b, c;                 // Uninitialized variable

// Inputing the Numbers

    system("cls");
    printf("Enter the first numbers:");
    scanf("%d", &a);
    printf("Enter the secound number:");
    scanf("%d", &b);~
    printf("Enter the third number:");~
    scanf("%d", &c);

//Opparations

    printf("a) %d\n", (int)((a+b) <= 80));
    printf("b) %d\n", (int)(!(a+c)));
    printf("c) %d\n", (int)(a != 0));    

return 0;
}
