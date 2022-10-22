#include <stdio.h>

int main()
{
// Create variables
    float a, b, addition, multiplication, subtraction, division ;                 // Uninitialized variable

// Inputing the Numbers
    printf("Input the both the floating numbers for your arithmatic calculations\n");
    scanf("%f %f", &a , &b);


//Arithmatic Opparations
    addition = a + b;
    subtraction = a - b;
    multiplication = a * b;
    division = a / b;

// Print variables
    printf("The addition of the numbers are %.3f\n", addition);
    printf("The subtraction of the numbers are %.3f\n", subtraction);
    printf("The multiplication of the numbers are %f\n", multiplication);
    printf("The division of the numbers are %f\n", division);
    return 0;
}

