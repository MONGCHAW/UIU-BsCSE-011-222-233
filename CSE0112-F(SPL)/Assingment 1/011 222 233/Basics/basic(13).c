#include<stdio.h>

void main(){
    

//Initializing values

   int length, breadth , area;                          /*Unintialized values*/


//Inputting the 

   printf("Enter the Length:");
   scanf("%d", &length);
   
   printf("Enter the Breadth:");
   scanf("%d", &breadth);

//Arithmatic Oparation

   area = length * breadth;

//Printing the answers

   printf("\nArea of rectangle : %d", area);


}