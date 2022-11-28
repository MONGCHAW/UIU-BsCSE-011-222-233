#include<stdio.h>

void main(){
    

//Initializing values

   int days, weeks, years;                          /*Unintialized values*/


//Inputting the Days

    printf("Enter days:");  
    scanf("%d", &days);

//Arithmatic Oparation

   years = (days / 365);
   weeks = (days % 365) / 7;
   days  = days - ((years * 365) + (weeks * 7));

//Printing the answers

   printf("Days: %d", days);
   printf("Weeks: %d\n", weeks);
   printf("Years: %d\n", years);


}