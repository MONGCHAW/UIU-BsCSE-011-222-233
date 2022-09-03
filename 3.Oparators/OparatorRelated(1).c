#include <stdio.h>

int main()
{
// Create variables
    int a, b, addition, product, subtraction, quotient, remainder ;                 // Uninitialized variable

// Inputing the Numbers
    printf("Enter the first numbers\n");
    scanf("%d", &a);
    printf("Enter the secound number\n");
    scanf("%f", &b);


//Arithmatic Opparations
    addition = a + b;
    subtraction = a - b;
    product = a * b;
    quotient = a / b;
    remainder = a % b;

// Print variables
    printf("Addition:%d\n", addition);
    printf("Subtraction:%d\n", subtraction);
    printf("Product:%d\n", product);
    printf("Quotient:%d\n", quotient);
    printf("Remainder:%d\n", remainder);

   return 0;
}
