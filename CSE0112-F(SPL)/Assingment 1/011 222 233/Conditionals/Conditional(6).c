#include <stdio.h>

void main()
{

   // Initiazlizing Variables

   char ch; // Unintialized Variables

   // Inputing Years

   printf("Enter any character: ");
   scanf("%c", &ch);

   // Conditinal Oparations

   printf("It is %s", (((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? "albhabet" : "not albhabet"));
}