#include <stdio.h>

int main()
{
// Create variables
    float a = 2.3;
    float b = 5.8; 
    float c = 1.1;
    float d = 3.5;
    float product;                 // Uninitialized variable

// Inputing the Numbers
    printf("The the numbers for your arithmatic calculations are a = %d, b = %d, c = %d, d = %d\n\n", a, b, c, d);

//Arithmatic Opparations
    product=(a + b - c) * d - a / d;

// Print variables
    printf("The product of the numbers are %lf\n\n", product);

   return 0;
}
