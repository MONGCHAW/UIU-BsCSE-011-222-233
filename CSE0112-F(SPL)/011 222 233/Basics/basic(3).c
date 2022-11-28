#include <stdio.h>

void main()
{
// Create variables
    int numA,numB, temp;

//Inputting Numbers
    printf("Enter the number 1:\n");
    scanf("%d", &numA);
    printf("Enter the number 2:\n");
    scanf("%d", &numB);

//Swapping The Numbers

    temp = numA;
    numA = numB;
    numB = temp;

//Printing the numbers
    printf("The new numbers are\n");
    printf("Number 1: %d\nNumber 2: %d", numA, numB);

}
