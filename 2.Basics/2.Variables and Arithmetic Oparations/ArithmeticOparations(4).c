#include <stdio.h>

int main()
{
// Create variables
    int a = 21;
    int b = 15; 
    int c = 34;
    int d = 6 ;
    int product;                 // Uninitialized variable

// Inputing the Numbers
    printf("The the numbers for your arithmatic calculations are a = %d, b = %d, c = %d, d = %d\n\n", a, b, c, d);

//Arithmatic Opparations
    product=a * b + (a - c) / d + b ;

// Print variables
    printf("The product of the numbers are %d\n\n", product);

   return 0;
}
