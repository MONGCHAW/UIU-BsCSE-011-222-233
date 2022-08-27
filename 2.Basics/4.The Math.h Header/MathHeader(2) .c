 #include<stdio.h>
 int main()
 {
     char ch;
     int num1,num2;

     printf("Enter First numbers: ");
     scanf("%d",&num1);

     printf("Enter Secound numbers: ");
     scanf("%d",&num2);


     getchar();
     printf("Choose the operator(+,-,*,/,%%): ");
     scanf("%c",&ch);

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
