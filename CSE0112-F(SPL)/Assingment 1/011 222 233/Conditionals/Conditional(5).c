#include <stdio.h>

void main()
{

   // Initiazlizing Variables

   int year; // Unintialized Variables

   // Inputing Years

   printf("Enter any year: ");
   scanf("%d", &year);

   // Conditinal Oparations

   (year % 4 == 0 && year % 100 != 0) ? printf("%d is leap year", year) :

   (year % 400 == 0) ? printf("LEAP YEAR")
                     : printf("%d is not a leap year", year);
}