 #include<stdio.h>
 int main()
 {
     //Variable Initialization
     char ch;                                               //Uninitialized Variables
     int num1,num2;                                         //Uninitialized Variables


     //Inputting Numbers
     printf("Enter First numbers: ");
     scanf("%d",&num1);

     printf("Enter Secound numbers: ");
     scanf("%d",&num2);

     getchar();                                             //This getchar() is important as it is what will let us take the char
     printf("Choose the operator(+,-,*,/,%%): ");           //input of the Arithmetic operations
     scanf("%c",&ch);

     //Arithmetic Operations with the help of switchs

     switch(ch)
     {
       case '+':
         printf("%d + %d =\t%d\n",num1,num2,num1+num2);
         break;
       case '-':
         printf("%d - %d =\t%d\n",num1,num2,num1-num2);
         break;
       case '*':
         printf("%d * %d =\t%d\n",num1,num2,num1*num2);
         break;
       case '/':
         printf("%d / %d =\t%d\n",num1,num2,num1/num2);
         break;
       case '%':
         printf("%d %% %d =\t%d\n",num1,num2,num1%num2);
         break;
       default:
         printf("Error! Invalid Operator.");
     }

     return 0;
 }
