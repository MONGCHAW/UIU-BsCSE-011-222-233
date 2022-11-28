#include <stdio.h>

void main()
{

   // Initiazlizing Variables

   int a, b, c; // Unintialized Variables

   // Inputing Numbers
   printf("Enter the numbers you want to test:");
   scanf("%d %d %d", &a, &b, &c);

   // Conditinal Oparations

   if (a >= b && a >= c)
   {
      printf("%d is the largest", a);
   }
   else if (b >= a && b >= c)
   {
      printf("%d is the largest", b);
   }
   else
   {
      printf("%d is the largest", c);
   }
}