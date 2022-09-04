#include <stdio.h>

int main()
{

//Initiazlizing Variables

   int a, b, c;                            //Unintialized Variables for Numbers
   int op, div;                           //Unintialized Variables for Oparators

//Inputing Numbers

   system("cls");
   printf("Enter The First Number:");
   scanf("%d", &a);
   system("cls");
   printf("Enter The First Number:%d",a);
   printf("\nEnter The Secound Number:");
   scanf("%d", &b);
   system("cls");

//Menu

oparations:
   printf("Enter The First Number:%d",a);
   printf("\nEnter The Secound Number:%d",b);
   printf("\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
   printf("\nChoose your options (1,2,3,4):");
   scanf("%d", &op);

//Arithmetic Operations with the help of if...else

   if (op == 1)
      {
         c = a + b ;
         system("cls");
         printf("Enter The First Number:%d",a);
         printf("\nEnter The Secound Number:%d\n",b);
         printf("Addition:%d", c);
      }

   else if (op == 2)
      {
         c = a - b;
         system("cls");
         printf("Enter The First Number:%d",a);
         printf("\nEnter The Secound Number:%d\n",b);
         printf("Subtraction:%d", c); 
      }

   else if (op == 3)
      {
         c = a * b;
         system("cls");
         printf("Enter The First Number:%d",a);
         printf("\nEnter The Secound Number:%d\n",b);
         printf("Multiplication:%d", c); 
      }

   else if (op == 4 )
      {
         system("cls");
         printf("Enter The First Number:%d",a);
         printf("\nEnter The Secound Number:%d",b);
         
         printf("\nChoose your options (1,2,3,4):%d",op);
divition:
         printf("\n\n1.Quotient\n2.Remainder\n");
         printf("\nChoose your options (1,2):");
         scanf("%d", &div);

         if (div == 1)
            {
               c = a / b;
               system("cls");
               printf("Enter The First Number:%d",a);
               printf("\nEnter The Secound Number:%d\n",b);
               printf("Quotient:%d", c);   
            }

         else if (div == 2)
         {
            c = a % b;
            system("cls");
            printf("Enter The First Number:%d",a);
            printf("\nEnter The Secound Number:%d\n",b);
            printf("Remainder:%d", c); 
         }
         else if (div >= 3 || div <= 0)
         {
            system("cls");
            printf("Invalid Oparation\n");
            goto divition;
         }
         else
         {
            system("cls");
            goto MATHERR;
         }
      }

   else if (op >= 5 || op <= 0)
      {
         system("cls");
         printf("Invalid Oparation\n");
         goto oparations;
      }

   else
      {
MATHERR:
         system("cls");
         printf("MATH Error\n");
      }
return 0;
}