#include <stdio.h>

int main()
{
// Create variables

    float a, b, c, d, result;                 // Uninitialized variable

// Inputing the Numbers

    printf("Enter the floating numbers for your arithmatic oparations [(a + b - c) * d - a / d]");
    scanf("%f %f %f %f", &a, &b, &c, &d);

//Arithmatic Opparations

    result=(a + b - c) * d - a / d;

// Print variables

    printf("The Numbers were a = %f , b = %f c = %f and d = %f \n", a, b,c,d);      //Printing the numbers
    printf("The product of [a * b + (a - c) / d + b] is %f\n\n", result);          //Printing the result

   return 0;
}
