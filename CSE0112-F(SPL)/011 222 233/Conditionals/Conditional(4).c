#include <stdio.h>

void main()
{

   // Initiazlizing Variables

   int a, b, c, largest; // Unintialized Variables

   // Inputing Numbers

   printf("Enter the numbers you want to test:");
   scanf("%d %d %d", &a, &b, &c);

   // Conditinal Oparations

   if(a >= b)    
    {
      if(a >= c)
      {
         printf("%d is the largest number", a);
      }
      else
      {
         printf("%d is the largest number", c);
      }
    }
   else if(b >= c)
   {
      printf("%d is the largest number", b);
   }  
   else
   {
      printf("%d is the largest number", c);
   }
}