#include <stdio.h>

void main(){

//Initiazlizing Variables
   int num;                                   //Unintialized Variables

//Inputing Numbers
   printf("Enter the number you want to test:");
   scanf("%d", &num);

//Conditinal Oparations

   if(num % 2 == 0 ){
      printf("EVEN");
   }

   else{
      printf("ODD");
   }
}