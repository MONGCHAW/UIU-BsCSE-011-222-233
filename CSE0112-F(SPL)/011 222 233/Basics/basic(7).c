#include <stdio.h>

void main()
{
//Variable Initialization

  float celsius, fahrenheit;                          //Uninitialized variables 

// Inputing Numbers

  printf("\nEnter Temperature in Celsius : ");
  scanf("%f", &celsius);

//Arithmatic Oparations

  fahrenheit = (1.8 * celsius) + 32;                  // Formula to caltulate Celsius to Fahrenheit

//Printing the Answers

  printf("\nTemperature in Fahrenheit : %f ", fahrenheit);

}
