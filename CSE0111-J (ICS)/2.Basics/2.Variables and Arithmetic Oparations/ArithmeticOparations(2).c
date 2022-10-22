#include <stdio.h>

int main()
{
// Create variables
    float a = 95.401;
    float b = 22.622 ; 
    float addition, multiplication, subtraction, division, remainder ;                 // Uninitialized variable

// Inputing the Numbers
    printf("Input the both the numbers for your arithmatic calculations are a = %lf and b = %lf\n\n\n", a , b);

//Arithmatic Opparations
    addition = a + b;
    subtraction = a - b;
    multiplication = a * b;
    division = a / b;

// Print variables
    printf("The addition of the numbers are %lf\n\n", addition);
    printf("The subtraction of the numbers are %lf\n\n", subtraction);
    printf("The multiplication of the numbers are %lf\n\n", multiplication);
    printf("The division of the numbers are %lf\n\n", division);

   return 0;
}
