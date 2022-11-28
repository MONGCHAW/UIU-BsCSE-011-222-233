#include <stdio.h>

void main()
{

   // Initiazlizing Variables

   int a, b, c, largest; // Unintialized Variables

   // Inputing Numbers

   printf("Enter the numbers you want to test:");
   scanf("%d %d %d", &a, &b, &c);

   // Conditinal Oparations

   largest = a > b ? (a > c ? a : c) : (b > c ? b : c);

   // Printing the results

   printf("%d is the largest", largest);
}