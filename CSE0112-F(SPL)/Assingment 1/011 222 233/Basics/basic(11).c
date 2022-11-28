#include<stdio.h>

void main(){
    

//Initializing values

    const float pi = 3.141;
    float radius, area;                 /*Unintialized values*/


//Inputting the radius

    printf("Enter Radius:");
    scanf("%f", &radius);

//Arithmatic Oparation

    area = pi * radius * radius;

//Printing the answers

    printf("%f\n", area);


}