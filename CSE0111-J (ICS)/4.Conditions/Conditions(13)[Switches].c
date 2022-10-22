 #include<stdio.h>

 int main()
 {
  //Variable Initialization
      int a, b;                               //Unintialized Variables for Numbers
      int op, div;                           //Unintialized Variables for Oparators


  //Inputting Numbers
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

  //Arithmetic Operations with the help of switchs

     switch(op)
     {
       case 1:
         system("cls");
         printf("Enter The First Number:%d",a);
         printf("\nEnter The Secound Number:%d\n",b);
         printf("Addition:%d", a+b);
         break;

       case 2:
         system("cls");
         printf("Enter The First Number:%d",a);
         printf("\nEnter The Secound Number:%d\n",b);
         printf("Subtraction:%d", a-b); 
         break;

       case 3:
         system("cls");
         printf("Enter The First Number:%d",a);
         printf("\nEnter The Secound Number:%d\n",b);
         printf("Multiplication:%d", a*b); 
         break;

       case 4:
        divition:
        
         printf("Enter The First Number:%d",a);
         printf("\nEnter The Secound Number:%d",b);

         printf("\nChoose your options (1,2,3,4):%d",op);
         printf("\n\n1.Quotient\n2.Remainder\n");

         printf("\nChoose your options (1,2):");
         scanf("%d", &div);

         switch (div)
          {
          case 1:
              system("cls");
              printf("Enter The First Number:%d",a);
              printf("\nEnter The Secound Number:%d\n",b);
              printf("Quotient:%d", a / b);   
            break;

          case 2:
              system("cls");
              printf("Enter The First Number:%d",a);
              printf("\nEnter The Secound Number:%d\n",b);
              printf("Quotient:%d", a % b);   
            break;
          default:
              system("cls");
              printf("Invalid Oparation\n");
            goto divition;
            break;
          }
         break;
       default:
          system("cls");
          printf("Invalid Oparation\n");
          goto oparations;
     }
     return 0;
 }
