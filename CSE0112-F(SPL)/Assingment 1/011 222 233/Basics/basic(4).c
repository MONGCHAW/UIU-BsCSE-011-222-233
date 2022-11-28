#include <stdio.h>

void main()
{
// Create variables
    float  NumA  , NumB ;
    float multiplication ;                 // Uninitialized variable

// Inputing the Numbers
    printf("Input the both the numbers for your arithmatic calculations\n");
    
    printf("Number 1:");
    scanf("%f",&NumA);

    printf("Number 2:");
    scanf("%f",&NumB);

//Arithmatic Opparations

    multiplication = NumA * NumB;

// Print variables

    printf("The multiplication of the numbers are %f\n\n", multiplication);

}
