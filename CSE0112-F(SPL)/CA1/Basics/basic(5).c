#include <stdio.h>

int main()
{
  //Variable Initialization
     int num1,num2;                                                                    //Uninitialized variables for numbers
     int product, addition, quotient, difference, remainder;                          //Uninitialized variables for the answers

  // Inputing Numbers
     printf("Enter First numbers: ");
     scanf("%d",&num1);

     printf("Enter Secound numbers: ");
     scanf("%d",&num2);

  //Arithmatic Oparations
    addition = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    remainder = num1 % num2;

  //Printing the Answers
    printf("%d + %d = %d\n", num1, num2, addition);
    printf("%d - %d = %d\n", num1, num2, difference);
    printf("%d * %d = %d\n", num1, num2, product);
    printf("%d / %d = %d\n", num1, num2, quotient);
    printf("%d %% %d = %d\n", num1, num2, remainder);

  return 0;
 }
