#include <math.h>
#include <stdio.h>

int main() {
//Initilaizing Varibales
    double base, exp, result;     /*Uninitilaized Variables The reason I took double here is because I can give both an integer and a decimal numbers*/
    
//Inputing Numbers  
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &exp);

//Calculating the power
    result = pow(base, exp);
//Printing the answer
    printf("%.1lf^%.1lf = %.2lf", base, exp, result);

    return 0;
}

                                                            

