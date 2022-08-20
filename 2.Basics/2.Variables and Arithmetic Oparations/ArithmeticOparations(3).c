#include <stdio.h>

int main()
{
// Create variables
    int a, b, addition, multiplication, subtraction, division, remainder ;                 // Uninitialized variable

// Inputing the Numbers
    printf("Input the both the numbers for your arithmatic calculations\n");
    scanf("%d %d", &a , &b);


//Arithmatic Opparations
    addition = a + b;
    subtraction = a - b;
    multiplication = a * b;
    division = a / b;
    remainder = a % b;

// Print variables
    printf("The addition of the numbers are %d\n", addition);
    printf("The subtraction of the numbers are %d\n", subtraction);
    printf("The multiplication of the numbers are %d\n", multiplication);
    printf("The division of the numbers are %d\n", division);
    printf("The remainder of the numbers are %d\n", remainder);

   return 0;
}
