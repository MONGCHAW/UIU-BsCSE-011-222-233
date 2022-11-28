#include <stdio.h>

void main()
{

   // Initiazlizing Variables

   int num; // Unintialized Variables

   // Inputing Years

   printf("Enter any number: ");
   scanf("%d", &num);

   // Conditinal Oparations

    if(num > 0)
    {
        printf("Enter number is positive");
    }
    else if(num < 0)
    {
        printf("Enter number is nagative");
    }
    else
    {
        printf("Enter number is zero");
    } 
}