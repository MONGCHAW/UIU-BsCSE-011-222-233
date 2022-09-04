#include <stdio.h>

int main()
{
//Initiazlizing Variables
   int a, b, c;                       //Unintialized Variables for Numbers
   int op;                           //Unintialized Variables for Oparators
//Inputing Numbers
   printf("Enter The Numbers:");
   scanf("%d %d", &a, &b);

//Menu
   printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
   printf("\nChoose your options (1,2,3,4):");
   scanf("%d", &op);


//Bitwise Oparations
   if(op == 1){
      c = a + b ;
      printf("%d + %d = %d", a, b, c);
   }
   else if (op == 2){
      c = a - b;
      printf("%d - %d = %d", a, b, c); 
   }

   else
      printf("\n%d is not a power of 2\n", a);

 return 0;
}