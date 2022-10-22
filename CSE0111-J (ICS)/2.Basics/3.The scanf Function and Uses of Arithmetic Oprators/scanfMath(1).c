#include <stdio.h>
#include <stdlib.h>


int main()
{
// Create variables
    int numberA;
    float numberB;

//Inputting Numbers
    printf("Enter the decimal and the float numbers\n");
    scanf("%d", &numberA);
    printf("Enter the float number\n");
    scanf("%f", &numberB);

//Printing The Numbers
    printf("Integar Value- %d\nFloating Point Value-%f", numberA, numberB);
    return 0;
}
