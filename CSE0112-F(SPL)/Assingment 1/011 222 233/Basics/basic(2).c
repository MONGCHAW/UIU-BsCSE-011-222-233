#include <stdio.h>
#include <stdlib.h>


void main()
{
// Create variables
    int numberA,numberB;

//Inputting Numbers
    printf("Enter the decimal and the float numbers\n");
    scanf("%d", &numberA);
    printf("Enter the float number\n");
    scanf("%d", &numberB);

//Printing The Numbers
    printf("The Sum of the integer %d + %d = %d", numberA, numberB, numberA+numberB);

}
