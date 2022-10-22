#include <math.h>
#include <stdio.h>

int main() {
//Initilaizing Varibales
    double val, sine = 0 , cosine = 0, tangent = 0;     /*Uninitilaized Variables The reason I took double here is because I can give both an integer and a decimal numbers*/
    
//Inputing Numbers  
    printf("Enter a number: ");
    scanf("%lf", &val);

//Calculating the power
    sine = sin(val);
    cosine = cos(val);
    tangent = tan(val);

//Printing the answer

    printf("Sine = %.2lf \nCosine =%.2lf \nTangent = %.2lf", sine, cosine, tangent);

    return 0;
}

                                                            

