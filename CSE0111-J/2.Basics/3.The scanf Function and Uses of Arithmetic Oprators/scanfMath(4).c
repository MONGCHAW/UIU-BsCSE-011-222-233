#include <stdio.h>

int main()
{
// Create variables

    int a, b, c, d, result;                 // Uninitialized variable

// Inputing the Numbers

    printf("Enter the Decimal numbers for your arithmatic oparations [(a + b - c) * d - a / d]");
    scanf("%d %d %d %d", &a, &b, &c, &d);

//Arithmatic Opparations

    result=(a + b - c) * d - a / d;

// Print variables

    printf("The Numbers were a = %d , b = %d c = %d and d = %d \n", a, b,c,d);      //Printing the numbers
    printf("The product of [(a + b - c) * d - a / d] is %d\n\n", result);          //Printing the result

   return 0;
}
