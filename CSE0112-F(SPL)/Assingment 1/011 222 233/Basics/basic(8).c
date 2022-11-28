#include <stdio.h>

void main()
{
//Variable Initialization

  float celsius, fahrenheit;                         //Uninitialized variables 

// Inputing Numbers

  printf("Please temperature in Fahrenheit: \n");
  scanf("%f", &fahrenheit);

//Arithmatic Oparations

  celsius = (fahrenheit - 32) * 5 / 9; // Formula to caltulate Fahrenheit to Celsius

//Printing the Answers

  printf("\n %f Fahrenheit = %f Celsius", fahrenheit, celsius);

}
