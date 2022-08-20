#include <stdio.h>
float pi =3.14159;                                                                              //Global Variable
int main()
{
// Create variables
    float radius,area;                                                                        // Uninitialized variable

// Inputing the Numbers

    printf("Enter the Radius number for your Area calculations:5");
    scanf("%f", &radius);

//Arithmatic Opparations

    area = pi*(radius*radius);

// Print variables

    printf("The area of the circle is: %f\n", area);      //Printing the results

   return 0;
}
